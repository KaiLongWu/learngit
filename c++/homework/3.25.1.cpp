#include<iostream>

#include<iomanip>

int main(){
    double height=100,allhigh=0;
    int n;
    std::cin>>n;
    if(n<1||n>10){
        std::cout<<"error";
        abort();
    }
    for(int i=0;i<n;i++){
        allhigh+=height*2;
        height/=2;
        if(i==0){
            allhigh=100;
            height=50;
        }
        
    }
    std::cout<<"第"<<n<<"次落地时，共经过"<<std::fixed<<std::setprecision(4)<<allhigh<<"米；反弹高度是"<<std::fixed<<std::setprecision(4)<<height<<"米。";
    return 0;
    }
