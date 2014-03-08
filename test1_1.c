#include<stdio.h>


int main()
{
	int a,b,c;
	printf("Please input 3 numbers as a,b,c \n");
	scanf("%d,%d,%d",&a,&b,&c);
	float sum = (a+b+c)/3.0;
	printf("The average is %.3f",sum);
	return 0;
}
