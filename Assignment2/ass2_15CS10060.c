#include "myl.h"


int readInt_part_of_float(int *n, int *flag);
void reverse(char *buff, int k, int j);

#define MAX_LEN 100
#define max_frac_dig 7

int printStr(char *str)
{
	int i = 0;

	
	while(str[i] != '\0')
		i++; 
	//i++;

	 __asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t" 
        "syscall \n\t"
        :
        :"S"(str), "d"(i+1)
    );
	 return i;

}

int readInt(int *n)
{
	int sign = 1; // 1 if no. is negative
	int i = 0; // 1 if '-' will not be taken
	int *num = new int;//(int) malloc(sizeof(int));
	*num = 0;
	char c;

	while(1)
	{
		__asm__ __volatile__ (
	            "syscall"::"a"(0), "D"(0), "S"(&c), "d"(1)
	            );

		if(c=='-' && i == 0)
		{
			sign = -1;
		}
		else if( c >= '0' && c <= '9')
		{
			*num = (*num) *10  + (int) (c - '0');
		}
		else if (c=='\n' || c == '\t' || c == ' ')
		{
			break;
		}
		else
		{
			return ERR;
		}

		i++;
	}
	*num = sign * (*num);
	*n = *num;
	return OK;
}
int printInt(int n)
{
	char buff[MAX_LEN] ;
	int num = n;
	int i = 0;

	if(num < 0)
	{
		buff[i++] = '-';
		num = -1 *num ;
	}

	while(num)
	{
		if(i > MAX_LEN -1) return ERR;
		buff[i++] = (char)( (num%10) + char('0') );
		num = num/10;
	}
	if(buff[0] == '-') 
	{
		reverse(buff, i-1, 1);
	}
	else 
		{
			reverse(buff, i-1, 0);
		}

	__asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"           
        "syscall \n\t"
        :
        :"S"(buff), "d"(i)
    );

	return i;
}

int readFlt(float *f)
{
	int f_int;
	int flag = 0;
	float f_frac = 0;
	int sign = 1, i;
	char c;
	float base = 0.1;

	int x = readInt_part_of_float(&f_int, &flag);
	if( x == ERR ) return ERR;
	if(f_int < 0 )
	{
		f_int = (-1) * f_int;
		sign = -1;
	}

	if(flag == 0) 
	{
		*f = f_int;
		f_frac = 0.00;
	}

	else
	{
		*f = f_int;

		for(i = 1 ; i <= max_frac_dig; i ++)
		{
			__asm__ __volatile__ (
		            "syscall"::"a"(0), "D"(0), "S"(&c), "d"(1)
		            );

			
			if( c >= '0' && c <= '9')
			{
				f_frac = f_frac + (c - '0') *base;
				base = base * 0.1;

			}
			else if (c=='\n' || c == '\t' || c == ' ')
			{
				break;
			}
			
			else
			{
				return ERR;
			}

		}

	}

	* f = ((float)f_int + f_frac)*sign;
	return OK;


}

int printFlt(float f) 
{
	int i = 0, tmp;
	float f_frac;
	int f_int = (int)f;
	char buff[MAX_LEN] ;

	if(f_int >= 0)
		f_frac = f - (float)f_int ;
	else
		f_frac = -1.0*f - (-1)*f_int ;

	buff[i++] = '.';
	if(f_frac == 0.0) buff[i++] = '0';
	while(f_frac != 0.0)
	{
		if(i > MAX_LEN -1) return ERR;
		f_frac *=10;
		tmp = (int)f_frac;
		f_frac = (float) (f_frac - tmp);
		buff[i++] = tmp + '0';
	}

	int int_part = printInt (f_int) ;
	if(int_part == ERR) return ERR;


	__asm__ __volatile__ (
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"           
        "syscall \n\t"
        :
        :"S"(buff), "d"(i)
    ); 
    return int_part + i;
}


void reverse(char *buff, int k, int j)
{
	char tmp;

	while(k > j)
	{
		tmp = buff[k];
		buff[k] = buff[j];
		buff[j] = tmp;
		k--;
		j++;
	}
}




int readInt_part_of_float(int *n, int *flag)
{
	int sign = 1; // 1 if no. is negative
	int i = 0; // 1 if '-' will not be taken
	int *num = new int;//(int) malloc(sizeof(int));
	*num = 0;
	char c;

	while(1)
	{
		__asm__ __volatile__ (
	            "syscall"::"a"(0), "D"(0), "S"(&c), "d"(1)
	            );

		if(c=='-' && i == 0)
		{
			sign = -1;
		}
		else if( c >= '0' && c <= '9')
		{
			*num = (*num) *10  + (int) (c - '0');
		}
		else if (c=='\n' || c == '\t' || c == ' ')
		{
			break;
		}
		else if (c == '.')
		{
			*flag = 1;;
			break;
		}
		else
		{
			return ERR;
		}

		i++;
	}
	*num = sign * (*num);
	*n = *num;
	return OK;
}

