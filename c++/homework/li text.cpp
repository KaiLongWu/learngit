#include <iostream>
#include <iomanip>
using namespace std;
int main ( )   
{
int a,b,c;
cout<<"����������";
cin>>a;
b=a%3;
c=a%7;
if(b==0&&c==0)
{cout<<"��3�ı�����Ҳ��7�ı���";}
else
{if(b==0&&c!=0)
{cout<<"��3�ı���������7�ı���";}
else
{if(b!=0&&c==0){cout<<"����3�ı�������7�ı���";}
else
{cout<<"����3�ı�����Ҳ����7�ı���";}}
}
return 0;
}

