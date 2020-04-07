#include <stdio.h>
struct gamegrade{
	int time;
	int grade;
};
int getgrade(struct gamegrade *p){
	FILE *fp=fopen("grade.txt","r");
	fscanf(fp,"%d %d\n",&(p->grade),&(p->time));
	printf("%d %d\n",p->grade,p->time);
	fclose(fp);
}
int main(){
	struct gamegrade thisgame;
    struct gamegrade *p=&thisgame;
    getgrade(p);
	printf("gradeµÄÖµÎª%d",p->grade); 
	return 0;
}
