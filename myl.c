#include "myl.h"


int prints(char *str){   // printing the string on the console
  if(str == 0) return 0 ;
  int strLen = 0;        // initialisng the length
  while( str[strLen] != '\0' ){
    strLen = strLen+1; // incrementing length as long as the null character is not encountered
  }
  __asm__ __volatile__ (
          "movl $1, %%eax \n\t"
          "movq $1, %%rdi \n\t"
          "syscall \n\t"
          :
          :"S"(str), "d"(strLen) // string str with length strLen
          ); 
  return strLen ;  // the length of number of number of chaarcters printed
}


int printi(int num){
  char store[11];   // -2,147,483,648 to 2,147,483,647
  int i=0 , start , end;
  
  if (num==0){      // case of number being zero
     store[i] = '0';  
     i++;           
  } 
  if (num<0){  // case of number being negative
    num = -num;  // printing the part without minus part as it is
    store[i]='-'; // and storing the charater array's first char as -
    i++;
  }
  while(num!=0){
    store[i]=( '0' + num % 10 ); // assigning the characters to teh array
    i++;
    num = num/10;
  }

  if (store[0]=='-'){         // checking if the start is - 
    start=1;
  }
  else{
    start=0;
  }
  end = i-1;
  while(start < end){
    char exchange;                  // reversing the array of cahracters..so as to maintain the order
    exchange = store[start];
    store[start] = store[end];
    store[end] = exchange;
    end = end - 1;                          
    start = start + 1;
  }
  __asm__ __volatile__ (
          "movl $1, %%eax \n\t"
          "movq $1, %%rdi \n\t"
          "syscall \n\t"
          :
          :"S"(store), "d"(i)  // store contains the number to be printed
          );                   // i is the length of such an array
  return i;
}


int printd(float num){
  char store[20];
  int count=0,i=0,start,end, decimalPlaces = 6;  // te precision is taken as 6 places
  if (num <0){
    num = -num;
    store[0]='-'; // checking ofr negative number
    i++;
  }

  int numInt = (int)num;   //obtaining the integer part of the number
    
 
if (numInt==0){                        // Checking whehter the number is 0
    store[i] = '0';
    i++;
  }
 while(numInt!=0){
    store[i]=(char)('0'+ numInt%10);       // Storing the number(integer) in reverse order
    i++;
    numInt = numInt/10;
  }
  if (store[0]=='-'){  // assigning start based on the sign of number
    start=1;
  }
  else{
    start=0;
  }
  end = i-1;

  while(start<end){                           // correcting the order of integer part of float number.
    char temp;
    temp = store[start];
    store[start] = store[end];
    store[end] = temp;
    start = start + 1;
    end = end - 1;
  }

/// considering the decimal part of the given number
  float numFlt = num - (int)num;
  
  // checking if the number of decimal spaces are less or more than the precision defined earlier.
  float toCheck = numFlt;
  while(toCheck != 0 && count < decimalPlaces){
  	count++;
  	toCheck *= 10 ;                    // this is to take care of the number of digits after deciaml point
    toCheck = toCheck - (int)toCheck;
  }
   if(count != decimalPlaces) decimalPlaces = count;
     // updating the count therby and hence changing the decimalPLces if required 

  if (numFlt > 0 && decimalPlaces>0){
    store[i] = '.';                        // placing the decimal point
    i++;
    while(numFlt!=0 && decimalPlaces>0){     // decimalPlaces of decimal places (6)
      numFlt *= 10;
      int temp = (int)(numFlt);
      store[i] = (char)('0'+ temp);
      i++; 
      decimalPlaces--;
      numFlt = numFlt - (int)numFlt; 
    }
  }                      // generate the character array that is required to be printed 
  __asm__ __volatile__ (
          "movl $1, %%eax \n\t"
          "movq $1, %%rdi \n\t"
          "syscall \n\t"
          :
          :"S"(store), "d"(i)           // print the number
          );
  return i;
}


int readi(int *ep){               // ep is a pointer that stores the number that is about t o be read.
  
 // if(ep == 0 ) return 0 ;
  char store[11];                 // declare an array...
  int i,size, num=0;                  
  __asm__ __volatile__(
          "movl $0, %%eax \n\t"
          "movq $1, %%rdi \n\t"
          "syscall \n\t"
          :"=rax"(size)          // size if calculated
          :"S"(store),"d"(11)    
          );

  size--;                     // as it includes the '\0' as well. decrement the size by 1
  if (size <=0){
    *ep = 1;
   return 0;
  }
  if (store[0]=='-'){                      // Checking whether the number is negative or not
    i=1;
  }
  else{
    i=0;
  }

  while(i<size){                  // loop to calculate the value of number from the read array
    if (store[i]<='9' && store[i]>='0' ){
      num = (store[i]-'0') +  num*10 ;     //Calculating the num
      i++;
    }
    else{
      *ep = 1;        //ERR   error is detected
      return 0;
    }
  }
  if (store[0]=='-'){  // checking the sign before returing the number
    num = -num;
  } 
  *ep = 0;          //OK
  return num;
}

int readf(float *fp){     // fp is a pointer to float number
  char store[20];         // considered a maximum o 20 in the buffer.
  int i,size,k,divi;
  float num = 0.0;        // number is initialized
  int decimal=0,scientific,exponent=0;
  float multi=10;
  __asm__ __volatile__(
          "movl $0, %%eax \n\t"
          "movq $1, %%rdi \n\t"
          "syscall \n\t"
          :"=rax"(size)           // size if calculated 
          :"S"(store),"d"(20)
          );

  size--;                          // dropping the last '\0'
  if (size <=0){                 // checking for an error
    *fp = 0;
    return 1;
  }
  if (store[0]=='-'){              // Checking whether the number is negative
    i=1;
  }
  else{
    i=0;
  }
 
   while(i<size){              // loop to find the float number
    if (store[i]=='.'){                              // Checking whther decimal point is encountered or not
      decimal = 1;           // decimal found
      i++;
      divi=10;                  // initialiing the number with which to be divided
      continue;
    }
    if (store[i]=='e' || store[i]=='E'){                              // Checking whther decimal point is encountered or not
      scientific = 1;           // decimal found
      i++;
      break;
    }
    
    if (decimal == 0 && store[i]>='0' && store[i]<='9'){
      num = num*10 + (store[i]-'0');    // so far no decimal point is encountered
      i++;
    }
    else{
      if (decimal == 1 && store[i]>='0' && store[i]<='9'){
        num += (1.0*(store[i] - '0'))/(divi);              // Calculating the decimal value of each decimal place
        divi = divi*10;
        i++;
      }
      else{
        *fp = 0;
        return 1;  // error detected
      }
    }
   
  }

   int t;
  if(scientific==1){
    if(i==size){}
    else if(store[i]=='-'){
      multi =0.1;
      i++;
    }
    else if(store[i]=='+'){
      i++;
    }
    while(i<size){
      if(store[i] >= '0' && store[i] <= '9'){
      exponent =exponent*10 + (store[i]-'0');
      i++;
      }
      else{
        *fp = 0;
        return 1;  // error detected
      }
    }
    for(t=0;t<exponent;t++){
      num = num*multi;
    }
  }

  if (store[0]=='-'){
    num = num*(-1);      // checking the sign and hence updating the number that is going to be returned
  }
  *fp = num;
  return 0;
}
