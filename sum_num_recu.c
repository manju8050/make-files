//sum of digits of a given number using recursion

#include<stdio.h>
int sum(int a)
{
	if(a==0)
	{
		return 0;
	}
	return(a%10+sum(a/10));

}

int main()
{
	int a,res;
	printf("enter the num value\n");
	scanf("%d",&a);
	res = sum(a);
	
	printf("%d",res);
	return 0;
}





/*  normal method
while(a!=0)
	{
		rem=a%10;
		res=res+rem;
		a/=10;

	}

*/

//output
//12345
//15
