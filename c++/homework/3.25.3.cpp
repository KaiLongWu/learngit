#include<iostream>
#include<stdlib.h>
int getmult(int i){
    int mult=1;
    i--;
    for(;i>0;i--){
        mult*=5;
    }
    return mult;
}
int main(){
    int prevalue,value,digit=0,judge=1;
    std::cin>>prevalue;
    for(int i=prevalue;i!=0;){
        if(i%10>4&&i%10<10){
            std::cout<<"Input error";
            judge=0;
        }
        i/=10;
        digit++;
        
    }
    if(judge==1){
    for(int i=1;i<digit+1;i++){
        value+=((prevalue%10)*getmult(i));
        prevalue/=10;
    }
    std::cout<<value<<std::endl;
    }
    return 0;
    

}
