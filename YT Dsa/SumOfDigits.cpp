#include<iostream>
using namespace std;
int SumOfDigits(int k){
    int sum = 0;
    while(k!=0){
        int lastdigit = k%10;
        sum = sum + lastdigit;
        
    }
}
int main(){
    int k;
    cin>>k;
    int x = SumOfDigits(k);
    cout<<x;
}