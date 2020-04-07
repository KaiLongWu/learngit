#include<iostream>
int getfactorial(int n){
    if(n==1){
        return 1;
    }else{
         return n*getfactorial(n-1);
    }
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<getfactorial(n);
    return 0;

}