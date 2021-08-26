

#include<stdio.h>

int main()
{
	char str[]="stringss";
	int size = sizeof(str);
	char str1[size];
	char ch = 's';
	int j=0;

	for(int i=0;i<size;i++)
	{
		if(str[i]!=ch)
		{
			str1[j]=str[i];
			j++;

		}
	}
	printf("%s",str1);
		
}

//tring