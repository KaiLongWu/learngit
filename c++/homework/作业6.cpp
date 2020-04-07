#include <iostream>
using namespace std;
int main(){
	int a,c=10;
	cin>>a;
	if(a<100||a>1000){
		cout<<"error";
		return 0;
	}
	int b[2];
	for(int i=0;i<3;i++){
		b[i]=a%10;
		a/=10;
	}
	for(int m=0;m<3;m++){
		if(b[m]==0){
			continue;
		}
		else{
			cout<<b[m];
		}
	}
	return 0;
}
