#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str[30],sub[10];
	int i,j,s[10][5],n,n1,k=0,flag;
	printf("Enter the string:");
	scanf("%s",str);
	n=strlen(str);

	for(i=0;i<=n/5;i++)
	{
		for(j=0;j<5;j++)
		{
			s[i][j]=str[k];
			k++;
		 }
		 if(str[k]=='\0')
			break;
	}
	for(i=0;i<=n/5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(s[i][j]!='\0')
				printf("%c",s[i][j]);
			else
				break;
		}
		printf("\n");

	}
	printf("Enter the substring:");
	scanf("%s",sub);
	n1=strlen(sub);
		for(j=0;j<=n/5;j++)
			for(k=0;k<5;k++)
			{
			   flag=0;
			   if(s[j][k]!='\0')
			   {
			     for(i=0;i<n1&&k<5;i++)
			     {
			       if(s[j][k]==sub[i])
				 k++;
			       else
			       {
				 flag=1;
				 break;
			       }
			     }
			   }
				if(flag==0&&i==n1)
					printf("%d->%d\n",j+1,k-n1+1);
			 }

   getch();
}


































































































































































