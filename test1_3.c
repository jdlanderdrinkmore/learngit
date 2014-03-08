#include<stdio.h>

int main()
{
	int i,n,sum = 0 ;
	printf("please input the number n !\n");
	scanf("%d",&n);
	for(i = 1; i <= n;i++ )
		sum += i;
	printf("The sum is %d!\n",sum);
	return 0;
}
