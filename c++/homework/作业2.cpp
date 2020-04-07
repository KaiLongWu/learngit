#include <iostream>
using namespace std;
int main(){
	char a;
	cin>>a;
	for(int i=0;i<3;i++){
		cout<<(int)a;
		(int)a++;
		if(i!=2){
			cout<<"  ";
		}
	}
	
	return 0;
}
