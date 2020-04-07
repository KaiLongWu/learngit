#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"ÇëÊäÈë³É¼¨";
	cin>>x;
	if(x>100)
		cout<<"ÊäÈë´íÎó";
	else {
	switch(x/10)
	{    case 10:
	     case 9:cout<<"A grade";break;
	     case 8:cout<<"B grade";break;
		 case 7:cout<<"C grade";break;
		 case 6:cout<<"D grade";break;
		 default:cout<<"Not passed";break;
	}}
	return 0;
}
