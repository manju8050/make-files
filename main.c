#include<stdio.h>
#include"sum.h"
#include"subtract.h"
int main()
{
    int num1=0,num2=0;
    printf("enter num1\n");
    scanf("%d",&num1);
    printf("enter num2\n");
    scanf("%d",&num2);

    sum(num1,num2);
    subtract(num1,num2);

    

    return 0;
}
