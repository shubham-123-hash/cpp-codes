// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
string check(long n){
    long x=0,y=1,z;
    while(z<n){
        z=x+y;
        x=y;
        y=z;
    }
    if(z==n){
    return "IsFibo";
    }
    else
    return "IsNotFibo";
}
int main() {
   int n;
   cin>>n;
   cout<<check(n);
    return 0;
}