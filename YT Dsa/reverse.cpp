#include<iostream>
using namespace std;
int reverse(int n){
    int num=0;
    while(n){
    int lastdigit =n%10;
    n/=10;
    num=num*10+lastdigit;
    }
    return num;
}
int main(){
    int num;
    cin>>num;
    int k =reverse(num);
    cout<<k;
}