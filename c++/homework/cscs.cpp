#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
if(x%2==0)
		{cout<<x<<"ou���y"<<endl;}
	else
	{cout<<x<<"ji���y"<<endl;}
	return 0 ;}

2��#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int a,b,c;
	long double k,d,p;
	cin>>a>>b>>c;
	p=(b*b-a*4*c);
	if(a==0)
		{cout<<"����=b2-4ac"<<endl;}
	else
	{if(p>=0)
	{k=(-b+sqrt(p))/2*a;
	 d=(-b+sqrt(p))/2*a;
	cout<<k<<"��"<<d<<endl;}
	else
	{k=(-b+sqrt(-p))/2*a;
	 d=(-b+sqrt(-p))/2*a;
	 cout<<k<<"i"<<"��"<<d<<"i"<<endl;}
	}
	return 0 ;}

