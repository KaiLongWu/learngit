#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double income,tax;
    cin>>income;
    if(income<1000){
        tax=0;
    }else if (income>=1000&&income<3000){
        tax=3;
    }else if(income>=3000&&income<5000){
        tax=5;
    }else if(income>=5000&&income<10000){
        tax=7;
    }else{
        tax=10;
    }cout<<"税率r="<<tax<<"%,奖金值n="<<fixed<<setprecision(2)<<income<<",实际所得奖金s="<<fixed<<setprecision(2)<<income*(1-tax*0.01);
    return 0;
}