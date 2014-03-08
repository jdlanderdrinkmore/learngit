#include<stdio.h>

int main()
{
	int line_1,line_2,line_3;
	printf("Please input 3 number as triangle's 3 line!\n");
	scanf("%d,%d,%d",&line_1,&line_2,&line_3);
	if(line_1+line_2 > line_3 && line_1+line_3 > line_2 && line_2+line_3 > line_1)
	{
		if(line_1*line_1+line_2*line_2 == line_3*line_3 || line_1*line_1+line_3*line_3 == line_2*line_2 || line_3*line_3+line_2*line_2 == line_1*line_1)
			printf("Yes!\n");
		else
			printf("No!\n");
	}
	else
		printf("Not a triangle!\n");
	return 0;
}
