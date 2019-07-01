#include<stdio.h>
#include<conio.h>
int n;
void space(int i)
{
	int j;
	for(j=1;j<=(2*n)-(2*i)-1;j++)
	 printf(" ");
}
void print(int k)
{
	int j;
	for(j=1;j<=k;j++)
	   printf("*");
}
void main()
{
   int i,j;
   printf("Enter the n value:");
   scanf("%d",&n);
   for(i=1;i<n;i++)
   {
     print(i);
     space(i);
     print(i);
     printf("\n");
   }
   for(i=1;i<=(2*n)-1;i++)
     printf("*");
     printf("\n");
   for(i=n-1;i>=1;i--)
   {
      print(i);
      space(i);
      print(i);
      printf("\n");
   }

getch();
}
