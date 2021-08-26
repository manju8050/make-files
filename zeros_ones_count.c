//to count total zeros and ones in binary number


#include<stdio.h>

int main()
{
	int one=0,zero=0,i,num;
	num=10;
	int a=1;
	for (i=0;i<32;i++)
	{
		if(num&a)
		{
			one++;
		}
		else{
			zero++;
		}
		a<<=1;
	}
	printf("the total zeros is %d\n",zero);
	printf("the total ones is %d\n",one);
	
	return 0;
}

//
the total zeros is 30
the total ones is 2