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
	printf("��¼���");
	return 0;
}
int main() { 
	struct gamegrade thisgame;
    struct gamegrade *p=&thisgame;
	printf("����������ʱ��ͷ���\n");
	scanf("%d",&(p->grade));
	scanf("%d",&(p->time));
	savegrade(p);
	
    return 0;
}

