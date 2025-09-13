#include<iostream>
using namespace std;
int i=2,k=0;
void factor(int n){
    while(n!=1){
        if(n%i==0){
            n/=i;
            if(i==k)
            continue;
            else
            cout<<i<<" ";
            k=i;
        }
         
        
        else{
            i++;
        }
              
}
}
int main(){
    int n;
    cin>>n;
    factor(n);
}