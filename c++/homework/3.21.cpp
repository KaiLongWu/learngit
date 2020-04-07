#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    double x,y;
    cin>>x;
    if(x<4.00){
        y=(x+7.00)/(2.00*x-1.00);
    }else if(x>=4.00&&x<70.00){
        y=x*x*3.00+5.00;
    }else{
        y=x-sqrt(4.00*x-1.00);
    }
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<y<<endl;
    return 0;
}