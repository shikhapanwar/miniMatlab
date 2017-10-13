#include "myl.h"
int readInt_part_of_float(int *n, int *flag);
void reverse(char *buff, int k, int j);

#define MAX_LEN 100
#define max_frac_dig 7


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
		buff[i++] = (char)( (num%10) + (char)('0') );
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
        "movq "(buff)", %%rsi\n\t"
        "movq "(i+1)", %%rdx\n\t"           
        "syscall \n\t"
        );

	return i;
}

int main()
{
	printInt(8);
}