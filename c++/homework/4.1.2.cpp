#include<iostream>
int main (){
    int n,result=1;
    std::cin>>n;
    for(n;n>0;n--){
        result*=n;
    }
    std::cout<<result;
    return 0;
}