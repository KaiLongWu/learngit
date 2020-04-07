#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double side[3];
    for(int i=0;i<3;i++){
        cin>>side[i];
    }
    if(side[0]+side[1]>side[2]&&side[0]-side[1]<side[2]){
        double p,s;
        p=(side[0]+side[1]+side[2])/2;
        s=sqrt(p*(p-side[0])*(p-side[1])*(p-side[2]));
        cout<<"area="<<s<<endl;
        if(side[0]==side[1]&&side[1]==side[2]){
            cout<<"等边三角形";
        }
    }else{
        cout<<"不构成三角形";
    }
    return 0;
}