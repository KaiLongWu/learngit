#include <stdio.h>
void printF(int a){
	if(a){
		printF(a-1);
		printf("%d",a);
		}
	return;
}
int main(){
	int a=1000000;
	printF(a);
	return 0;
}
