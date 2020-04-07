#include <stdio.h>
#include <stdlib.h>
int times;
struct gradeface{
    int fraction;
    int month;
    int day;
    int hour;
    int minute;
}grade;

int main (){
    struct gradeface *p=&grade;
    FILE *fl=fopen("times.txt","r");
    fscanf(fl,"%d",&times);
    fclose(fl);
    FILE *fc=fopen("times.txt","w");
    times++;
    printf("%d",times);
    fprintf(fc,"%d",times);
    fclose(fl);
   
	return 0;
}  /*FILE*fn=fopen("grade.txt","r");
    for(int i=0;i<times-1;i++){
        fscanf(fn,"%d %d %d %d %d \n",p->fraction,p->month,p->day,p->hour,p->minute);
        printf("·ÖÊý£º%d %d.%d %d:%d",grade[i].fraction,grade[i].month,grade[i].hour,grade[i].minute);
    }
    fclose(fn);*/
