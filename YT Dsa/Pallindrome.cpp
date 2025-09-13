#include<iostream>
using namespace std;
bool pallindrome(int k){
    int num = 0,l=k;
    while(k!=0){
        int lastdigit = k%10;
        num = num*10 + lastdigit;
        k = k/10;
    }
    if(num==l){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int k = 1234321;
    int x = pallindrome(k);
    cout<<x;
}