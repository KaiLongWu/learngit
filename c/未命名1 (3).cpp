#include <stdio.h> 
 
 void getdata(){ 
    int times;
    int *q=&times;
    FILE *fl=fopen("times.txt","r");
    fscanf(fl,"%d",&times);
	fclose(fl);
	FILE *fc=fopen("times.txt","w");
    times++;
    fprintf(fc,"%d",times);
   	fclose(fc);
    
}
int main(){
	getdata();
	return 0;
}

