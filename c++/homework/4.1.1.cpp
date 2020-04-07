#include <iostream>
int main(){
    int n=0,pos=0,neg=0,zero=0;
    std::cin>>n;
    for ( int i = 0; i < n; i++){
        int temp;
        std::cin>>temp;
        if(temp<0){
            neg++;
        }else if(temp>0){
            pos++;
        }else{
            zero++;
        }
    }
    std::cout<<"正数有"<<pos<<"，负数有"<<neg<<"，零有"<<zero<<std::endl;
    return 0;
}