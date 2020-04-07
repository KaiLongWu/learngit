#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	int jiecheng(int n);
	printf("%d\t",jiecheng(a));
}
int jiecheng(int n)
{
	if(n==1)
		return 1;
	else 
		return n*jiecheng(n-1);
}

