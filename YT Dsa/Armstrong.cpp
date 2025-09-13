#include<iostream>
using namespace std;
void armstrong(int k){
    int ans=0,num=k;
    while(k!=0){
    int lastdigit = k%10;
    ans = (lastdigit*lastdigit*lastdigit) + ans;
    k=k/10;
    }
    if(ans==num){
        cout<<"Armstrong";
    }
    else{
        cout<<"not armstrong";
    }
}
int main(){
    int k;
    cin>>k;
    armstrong(k);
}