#include <iostream>
using namespace std;
//���� n��>0����ѧ����������ѧ�š��ɼ����ֱ�����ɼ���ߺͳɼ����ѧ����������ѧ�š�
//����������ѧ�ž�Ϊ������ 10 ���ַ����ַ������ɼ�Ϊ 0 �� 100 ֮���һ�����������ﱣ֤��һ�����������û������ѧ���ĳɼ�����ͬ�ġ�
//�����ʽ��
//��ÿ������������� 2 �У��� 1 ���ǳɼ����ѧ����������ѧ�ţ��� 2 ���ǳɼ����ѧ����������ѧ�ţ��ַ������� 1 �ո�
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
