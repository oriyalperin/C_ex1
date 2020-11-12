#include "myMath.h"

double Exponent(int x)
{

	double sum=1;
	if(x<0)
	{
		x=x*-1;
		for(int i=0;i<x;i++)
		{	
			sum*=EXPONENT;
		}
		sum=1/sum;
	}
	else
	{
		for(int i=0;i<x;i++)
		{
			sum*=EXPONENT;
		} 
	}

	return sum;
}


double Power(double x , int y)
{		
	if (x==0.0)
		return x;

	double sum=1;

	if(y<0)
	{
		y=y*-1;
		for(int i=0;i<y;i++)
		{
			sum*=x;
		}
		sum=1/sum;
	}
	else if(y>0)
	{

	for(int i=0;i<y;i++)
	{
		sum*=x;
	}
	}
	
	return sum;
	
}

