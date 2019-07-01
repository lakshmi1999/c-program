#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j,front=0,size,back,a[50][50];
	printf("Enter the number:");
	scanf("%d",&n);
	size=(2*n)-1;
	back=size-1;
	while(n!=0)
	{
	for(i=front;i<=back;i++)
		for(j=front;j<=back;j++)
			if(i==front||i==back||j==front||j==back)
				a[i][j]=n;
	 ++front;
	 --back;
	 --n;
	 }
	 for(i=0;i<size;i++)
	 {
		for(j=0;j<size;j++)
			printf("%d",a[i][j]);
		printf("\n");
	 }
getch();
}
