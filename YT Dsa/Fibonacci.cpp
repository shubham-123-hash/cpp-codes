#include<iostream>
using namespace std;
int Factorial(int k){
    long ans = 1;
    while(k>0){
        ans = ans*k;
        k--;
    }
    return ans;
}
int main(){
    int k;
    cin>>k;
    int x = Factorial(k);
    cout<<x;
}