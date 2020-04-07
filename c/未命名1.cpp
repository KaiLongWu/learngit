#include <stdio.h>
struct gamegrade{
	int time;
	int grade;
};
int savegrade(struct gamegrade *p){
	FILE *fp=fopen("grade.txt","a");
	fprintf(fp,"%d %d\n",p->grade,p->time);
	//size_t fwrite(const void* buffer, size_t size, size_t count, FILE* stream);
	fclose(fp);
	printf("记录完成");
	return 0;
}
int main() { 
	struct gamegrade thisgame;
    struct gamegrade *p=&thisgame;
	printf("请依次输入时间和分数\n");
	scanf("%d",&(p->grade));
	scanf("%d",&(p->time));
	savegrade(p);
	
    return 0;
}

