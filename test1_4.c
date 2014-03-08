#include<stdio.h>
#include<math.h>


int main()
{
	float  angle;
	printf("Please input an angle number between 0-360!\n");
	scanf("%f",&angle);
	printf("The sin(%f)=%.4f,cos(%f)=%.4f\n",angle,sin(angle),angle,cos(angle));
	return 0;
}
