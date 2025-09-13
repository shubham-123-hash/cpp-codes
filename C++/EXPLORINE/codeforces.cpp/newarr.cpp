#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k,p,rem,quo,i=1,sum=0,n1;
    cin>>n>>k>>p;
    int a[n];
    rem=abs(k%p);
    quo=abs(k/p);
    n1=rem;
    if((k<=0&&-n*p<=k)||(k>=0&&n*p>k))
    {
    
        while(quo){
            a[i]=p;
            quo--;
            i++;
            sum=sum+p;
        }
        a[i]=rem;
        sum=sum+rem;
        if(k<0){
            sum=-sum;
        }
        if(n1==0){
            i-=1;
        }
        cout<<i<<endl;
    
        

    

    }
    else{
        cout<<"-1"<<endl;
    }
}
}