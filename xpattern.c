#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,j,n;
	char str[10];
	printf("Enter the string:");
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j||j==(n-i-1))
				printf("%c",str[i]);
			else
				printf(" ");
		}
		printf("\n");
	}
getch();
}
