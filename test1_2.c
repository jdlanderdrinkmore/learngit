#include<stdio.h>

int main()
{
	float tem_f,tem_c;
	printf("Please input the temprature!\n");
	scanf("%f",&tem_f);
	tem_c  = 5*(tem_f-32)/9;
	printf("The temperaturn of c is %.3f\n",tem_c);
	return 0;
}
