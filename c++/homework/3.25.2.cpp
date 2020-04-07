#include<iostream>
int main(){
    double n,result=0;
    std::cin>>n;
    for(int i=1;i<n+1;i++){
        result+=i*i;
    }if(n>0){
    std::cout<<"表达式的值="<<result/n;
    }else
    {
        std::cout<<"表达式的值=0";
    }
    
    return 0;
}