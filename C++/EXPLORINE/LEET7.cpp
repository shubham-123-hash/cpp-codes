#include<iostream>
#include<climits>
using namespace std;

int reverse(int x) {
    int a=x;int last;long rev=0;
    while(a)
    {
       last=a%10;
       rev=rev*10+last;
       a=a/10;
    }
    if(rev>INT_MAX || rev<INT_MIN) return 0;
    return rev;   
   }
int main(){
int n;
cin>>n;
int revers=reverse(n);
cout<<revers;
return 0;
}