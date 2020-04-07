#include<iostream>
int getfactorial(int n){
    if(n==1){
        return 1;
    }else{
         return n*getfactorial(n-1);
        }
    }
int plus(int n){
    if(n==1){
            return 1;
             }else{
    return (getfactorial(n)+plus(n-1));
             }
}
int main(){
    int n;
    std::cin>>n;
    std::cout<<plus(n);
    return 0;

}