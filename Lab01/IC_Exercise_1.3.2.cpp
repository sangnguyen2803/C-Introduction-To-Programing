#include <stdio.h>
#include <math.h>
int main()
{
	double h,w,bmi;
	printf(" Enter the value of Height ( measure : meters ) - h = ");
	scanf("%lf",&h);
	printf(" Enter the value of Weight ( measure : kilograms) - w = ");
	scanf("%lf",&w);
	bmi = w/(pow(h,2));
	printf(" Your BMI (Body Mass Index) - BMI = %.2lf \n",bmi);
	if (18.5 > bmi)
	{
		printf(" Your body is thin");
	}
	if (bmi >= 18.5 & bmi < 25)
	{
		printf(" Your body is normal ");
	}
	if (bmi >= 25 & bmi < 30)
	{	
		printf(" Your body is fat");
	}
	if (bmi > 30)
	{
		printf(" Your body is obese ");
	}
	return 0;
}
