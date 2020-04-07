#include <stdio.h>
void printF(int a){
	int i; 
	for(i=0;i<a;i++){
		printf("%d",i);
	 }	
	 return;
}
int main(){
	int a=1000000;
	printF(a);
	return 0;
}
