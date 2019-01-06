#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char str[20],temp;
   int i,j,k,n;
   printf("Enter the string:");
   scanf("%s",str);
   n=strlen(str);
   k=n-1;
   for(i=0;i<n/2;i++)
   {
     if(str[i]>='a'&&str[i]<='z')
     {
      for(;k>=0;k--)
      {
	 if(str[k]>='a'&&str[k]<='z')
		{
		   temp=str[i];
		   str[i]=str[k];
		   str[k]=temp;
		   break;
		}
      }
     }
	 k--;
   }
      printf("%s",str);
      getch();
      }
