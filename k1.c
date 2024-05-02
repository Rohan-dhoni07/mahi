#include<stdio.h>
int main()
	{
	int u,c=0;
	float bill=0.0;
	printf("enter the units consumed\n");
	scanf("%d",&u);
	if(u>=0&&u<=100)
	c=100*u;
	else if(u>100&&u<=150)
	c=450+(u-100)*7;
		else if(u>150&&u<=200)
		c=800+(u-150)*15;
			else if(u>200&&u<=500)
			c=1200+(u-200)*15;
			else if(u>500)
			c=5700+(u-500)*17;
			bill=114+1.3*c;
			printf("the bill is %f",bill);
			return 0;
}
