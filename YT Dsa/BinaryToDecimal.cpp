#include<iostream>
#include<cmath>
using namespace std;
int BinaryTodecimal(int n){
    int i=0,dec=0;
    while(n!=0){
        int lastdigit = n%10;
        n=n/10;
        dec = (pow(2,i))*lastdigit + dec;
        i++;
    }
    return dec;
}
int main(){
    int n;
    cout<<"enter binary number"<<endl;
    cin>>n;
    cout<<BinaryTodecimal(n);
}