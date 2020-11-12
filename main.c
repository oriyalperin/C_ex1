#include <stdio.h>
#include "myMath.h"


int main()
{
	printf("please enter a number:");
	double x;
	scanf("%lf",&x);
	int xEXP=(int)x;
	float fx1= sub((add(Exponent(xEXP),Power(x,3))),2);
	printf("the 1st function: (e^x)+(x^3)−2, at the point %lf the result is: %0.4lf \n",x, fx1);
	float fx2= add(mul(x,3),mul(Power(x,2),2));
	printf("the 2st function: 3x+2x^2, at the point %lf the result is: %0.4lf \n",x, fx2);
	float fx3=sub(div(mul(Power(x,3),4),5),mul(x,2));
	printf("the 3st function: (4x^3)/5-2x, at the point %lf the result is: %0.4lf \n",x, fx3);

	
	


	return 0;
}
