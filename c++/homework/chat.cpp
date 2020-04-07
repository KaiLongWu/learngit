
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
   	int n,a,b,c;
   	cin>>n;
   	a=n/100;
   	b=(n/10)%10;
   	c=n%10;
   	if (c==0&&b==0){
   		cout<<a<<endl;
		} 
   else if(c==0&&b!=0){
   		cout<<b<<a<<endl;
		}
	else{
		cout<<c<<b<<a<<endl;
   		}
		return 0;
}


