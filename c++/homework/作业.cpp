#include <iostream>
using namespace std;
int main(){
    double n,y=1,judge=1;
    cin>>n;
	if(n<0){
		judge=-1;
		n=-n;
	}
    for(int i=0;i<n;i++){
          y*=2;
		}
    if(judge==1){
    	cout<<y+1<<endl  ;
    }else if(judge==-1){
        cout<<1/y+1<<endl;
	}else if(n==0){
    	cout<<2<<endl;
	}
return 0;
}
             
