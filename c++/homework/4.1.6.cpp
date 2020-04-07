#include<iostream>
int multself(double x,double n){
        int result=1;
        for(int i=n;i>0;i--)
             result*=x;
        return result;
}
int factorial(double n){
    int result;
    for(n;n>0;n--){
        result*=n;
    }
    return result;
}
int main(){
    std::cout<<"请分别输入展开式对应的n与x"<<std::endl;
    double n,x,y;
    std::cin>>n>>x;
    for(int i=0;i<n+1;i++){
        y+=(multself(x,n)/factorial(i));
    }
    std::cout<<y;
    return 0;

}