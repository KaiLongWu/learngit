#include <stdio.h>
int main(){
	char str[15][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int sum,i;
	char n[10000];
	gets(n);
	for(i=0;n[i]!=0;i++){
		sum=sum+n[i]-'0';
	}	
	int m=1;
	int a[m];
	while(sum!=0){	
		a[m]=sum%10;
		m++;
		sum/=10;
	}
	m--;
	for(m;m!=0;m--){
		printf("%s",str[a[m]]);
		if(m>0){
			printf(" ");
		}
	}printf("\n");
	return 0;
	
}
