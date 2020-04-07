#include <stdio.h>
int getnumber(int a){
	int i;
    for( i=0;a!=1;i++){
        if(a%2==0){
        	a/=2;
		}else{
        	a=3*a+1;
        	i-=1;
    	}
		}
	printf("%d",i);
	}
int main(){
    int a;
    scanf("%d",&a);
    getnumber(a);
    return 0;
}
