#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double a,b,c,p,s;
    cin>>a>>b>>c;
    if(a+b>c&&a-b<c){
        p=(a+b+c)/2;
        s=sqrt((p-a)*(p-b)*(p-c)*p);
        cout<<"area="<<s<<endl;
        if(a==b&&b==c){
            cout<<"等边三角形";
        }else if((a-b)*(a-c)*(b-c)==0&&((a*a+b*b-c*c)/2*a*b!=0.5)){
            if((a*a+b*b-c*c)/2*a*b==sqrt((2.0)/2)||(a*a+b*b-c*c)==0){
                cout<<"等腰直角三角形";
            }else
            {
                cout<<"等腰三角形";
            }
        }else if ((a*a+b*b-c*c)*(a*a+c*c-b*b)*(c*c+b*b-a*a)==0){
            cout<<"直角三角形";
        }else{
            cout<<"一般三角形";
        }
    }
    else {
        cout<<"不构成三角形";
    }
    return 0;
}