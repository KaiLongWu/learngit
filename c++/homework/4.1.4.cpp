#include <iostream>
int main(){
    int num,judge=1;
    std::cin>>num;
    if(num/100>10||num/100<1){
        std::cout<<"error";
        judge=0;
    }
    if(judge==1){
        for(int i=0;i<3;i++){
            int temp;
            temp=num%10;
            num/=10;
            if(temp==0&&i==0){
                continue;
            }
            std::cout<<temp;
        }
        return 0;

    }
}