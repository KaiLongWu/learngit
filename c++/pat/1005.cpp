#include<iostream>
#include<vector>
using namespace std;
/*拉兹(Callatz)猜想已经在1001中给出了描述。在这个题目里，情况稍微有些复杂。
//当我们验证卡拉兹猜想的时候，为了避免重复计算，可以记录下递推过程中遇到的每一个数。
//例如对 n=3 进行验证的时候，我们需要计算 3、5、8、4、2、1，则当我们对 n=5、8、4、2 进行验证的时候，
//就可以直接判定卡拉兹猜想的真伪，而不需要重复计算，因为这 4 个数已经在验证3的时候遇到过了，
我们称 5、8、4、2 是被 3“覆盖”的数。我们称一个数列中的某个数 n 为“关键数”，如果 n 不能被数列中的其他数字所覆盖。
现在给定一系列待验证的数字，我们只需要验证其中的几个关键数，就可以不必再重复验证余下的数字。
你的任务就是找出这些关键数字，并按从大到小的顺序输出它们。*/
int main(){
    int n,m,k=0,judge=1,print[100],s=0;
    cin>>n;
    int text[n];//所有输入值
    int know[1000];//可能的重叠数
    for(int i=0;i<n;i++){
        cin>>text[i];
    }
    for(int i=0;i<n;i++){
        m=text[i];
        for(int q=0;q<k;q++){  //判断是否为覆盖的数
            if(m==know[q]){
                judge=0;
                break;
            }
            if(q==k-1){
                print[s]=text[i];
                s++;
                judge=1;
            }
        }
        
        if(judge==1){
            while(m!=1){
                if(m%2==0){
                    m/=2;
                }else{
                    m=(3*m+1)/2;
                }
                know[k]=m;
                k++;
            }
        }
        
    }
    for(int i=0;i<s;i++){
        for(int m=i+1;m<s;m++){
            if(print[i]<print[m]){
                int temp;
                temp=print[i];
                print[i]=print[m];
                print[m]=temp;
            }
        }
    }
    for(int i=0;i<s;i++){
        cout<<print[i];
        if(i!=s-1){
            cout<<" ";
        }
    }
    return 0;

}