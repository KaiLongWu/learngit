#include <iostream>
#include <string>
using namespace std;
int judge(bool flag){	
		if(flag==true){
			cout<<"YES"<<endl;
		}else if(flag==false){
			cout<<"NO"<<endl;
		}
}
int main(){
	int number;
	cin>>number;//¼���б���� 
	string str;
	while(number>0){
		int p=0,t=0,pn=0,tn=0,keep=1;
		bool flag=false; //�б��ʼ�� 
		cin>>str;         //¼���б���� 
		int lon=str.length();      //�õ���䳤�� 
		if(lon<3){                  //�����ж� 
			flag=false;             
			judge(flag);
			number--;
			continue; 
		} 
		for(int i=0;i<lon;i++){                            //���ɷ��ж� 
			if(str[i]=='P'||str[i]=='A'||str[i]=='T'){
				flag=true;
			}else{
				flag=false;
				keep=0;
				break;
			}
		}
		if(keep==1){	
			for(int i=0;i<lon;i++){
				if(str[i]=='P'){
					p++;
					pn=i;
					}
				if(str[i]=='T'){
					t++;
					tn=i; 
					}
				}		
			
			if(p>1||t>1||pn>tn||tn-pn==1){
					flag=false;
					judge(flag);
					number--;
					continue;
				}
			if(tn-pn==2){
				flag=true;
				judge(flag);
				number--;
				continue;
			}
			if((tn-pn-1)*pn==(lon-tn-1)){
				flag=true;
			}else{
			flag=false;
			}
			}
		judge(flag);
		number--;
	}
	return 0;
}
