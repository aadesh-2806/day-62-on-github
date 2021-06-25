#include<stdio.h>
#define N 5
void readarray(int a[][N],int r,int c)
{ 
	int i,j;
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			printf("Give a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}	
}
void printarray(int a[][N],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%4d   ",a[i][j]);
		printf("\n");
	}
}
int main()
{
	int a[N][N];
	int p[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int i,choice,v;
	do{
		printf("1. Enter values of array\n");
		printf("2. Print the array\n");
		printf("3. Convert array\n");
		printf("4. Print one dimension array using pointers\n");
		printf("5. EXIT\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
				printf("Give value to enter: \n");
				readarray(a,2,3);
				break;
		case 2:
				printf("The array is :   \n");
				printarray(a,2,3);
				break;
		case 3:
				printf("The converted array is :      \n");
				printarray(p,2,3);
				break;
		case 4:
				printf("The array values using pointer notation are :\n");
				for (i=0;i<10;i++)
				printf("%d   %d\n",p[i],*(p+i));
				break;
		case 5:
				printf("Thank you, BYE\n");
				break;
		default:
				printf("invalid choice, enter again\n");
		}
	} while(choice!=5);	
}
