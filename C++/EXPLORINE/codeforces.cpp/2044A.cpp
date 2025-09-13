#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    if(t>=1 && t<=99){
        int n;
        while(t!=0){
            cin>>n;
            if(n>=2 && n<=100){
                int m=0;
                for(int i=1;i<n;i++){
                    m++;
                }
                cout<<m<<endl;;
            }
            else break; 
        t--;}
    }
    return 0;
}