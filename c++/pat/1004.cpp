#include <iostream>
using namespace std;
//读入 n（>0）名学生的姓名、学号、成绩，分别输出成绩最高和成绩最低学生的姓名和学号。
//其中姓名和学号均为不超过 10 个字符的字符串，成绩为 0 到 100 之间的一个整数，这里保证在一组测试用例中没有两个学生的成绩是相同的。
//输出格式：
//对每个测试用例输出 2 行，第 1 行是成绩最高学生的姓名和学号，第 2 行是成绩最低学生的姓名和学号，字符串间有 1 空格。
int main(){
	int n,sorce,maxsorce,minsorce;
	cin>>n;
	string name,project,maxname,maxproject,minname,minproject;
	cin>>name>>project>>sorce;
	maxproject=project;
	maxname=name;
	maxsorce=sorce;
	cin>>name>>project>>sorce;
	if(sorce>maxsorce){
		minsorce=maxsorce;
		minproject=maxproject;
		minname=maxname;
		maxproject=project;
		maxname=name;
		maxsorce=sorce;
	} else{
		minname=name;
		minproject=project;
		minsorce=sorce;
	}
	for(int i=0;i<n-2;i++){
		cin>>name>>project>>sorce;
		if(sorce>maxsorce){
			maxproject=project;
			maxname=name;
			maxsorce=sorce;
		} else if(sorce<minsorce){
			minsorce=sorce;
			minproject=project;
			minname=name;
		}else{
			continue;
		}
	}
	cout<<maxname<<" "<<maxproject<<endl<<minname<<" "<<minproject;
return 0;
}
