#include<stdio.h>
#include<conio.h>
int main()
{
	char com[30];
	int i=2,a=0;
	printf("\nEnter Comment:");
	gets(com);
	if(com[0]=='/')
	{
		if(com[1]=='/')
			printf("It is a comment\n");
	else if(com[1]=='*')
	{
		for(i=2;i<=30;i++)
		{
			if(com[i]=='*'&&com[i+1]=='/')
			{
				printf("It is a comment\n");
				a=1;
				break;
			}
			else
			continue;
		}
		if(a==0)
			printf("\nIt is not a comment");
		}
		else 
			printf("\nIt is not a comment");
	}
	else
		printf("\n It is not a comment");
}