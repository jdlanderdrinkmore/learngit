#include<stdio.h>
#include<math.h>
#define pi 3.1415926

int main()
{
	float  rad,angle;
	printf("Please input an angle number between 0-360!\n");
	scanf("%f",&angle);
	rad = angle/180*pi;
	printf("The sin(%f)=%.4f,cos(%f)=%.4f\n",rad,sin(rad),rad,cos(rad));
	return 0;
}
