//decimal to binary using bitwise operator

#include<stdio.h>

int main()
{
	char a=8;
	char bval=0;
	
	for(int i=7;i>=0;i--)
	{
		bval=(a>>i)&1;
		printf("%d",bval);
	}
}

//00001000