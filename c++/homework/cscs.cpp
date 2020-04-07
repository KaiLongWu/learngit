#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
if(x%2==0)
		{cout<<x<<"ou数簓"<<endl;}
	else
	{cout<<x<<"ji数簓"<<endl;}
	return 0 ;}

2、#include<iostream>
#include<math.h>
using namespace std;
int main()
{   int a,b,c;
	long double k,d,p;
	cin>>a>>b>>c;
	p=(b*b-a*4*c);
	if(a==0)
		{cout<<"△÷=b2-4ac"<<endl;}
	else
	{if(p>=0)
	{k=(-b+sqrt(p))/2*a;
	 d=(-b+sqrt(p))/2*a;
	cout<<k<<"或ò"<<d<<endl;}
	else
	{k=(-b+sqrt(-p))/2*a;
	 d=(-b+sqrt(-p))/2*a;
	 cout<<k<<"i"<<"或ò"<<d<<"i"<<endl;}
	}
	return 0 ;}

