#include <iostream>
#include <iomanip>
using namespace std;
int main ( )   
{
int a,b,c;
cout<<"请输入数据";
cin>>a;
b=a%3;
c=a%7;
if(b==0&&c==0)
{cout<<"是3的倍数，也是7的倍数";}
else
{if(b==0&&c!=0)
{cout<<"是3的倍数，不是7的倍数";}
else
{if(b!=0&&c==0){cout<<"不是3的倍数，是7的倍数";}
else
{cout<<"不是3的倍数，也不是7的倍数";}}
}
return 0;
}

