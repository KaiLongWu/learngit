#include<stdio.h>
void main()
{
	double a;
	scanf("%f",&a);
	double jiecheng(double n);
	printf("%f\t",jiecheng(a));
}
double jiecheng(double n)
{
	if(n==1)
		return 1;
	else 
		return n*jiecheng(n-1);
}
