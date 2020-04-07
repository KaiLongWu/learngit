#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a;
	cin>>a;
	double b=a/180*3.14159;
	double y=sqrt(1.0/2-cos(b)/2);
	cout<<"y="<<y<<endl;
	return 0;
}

