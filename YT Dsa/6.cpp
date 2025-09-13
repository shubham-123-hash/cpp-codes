#include<iostream>
using namespace std;
// sum of 1 to n
int sum(int n)
{
    int add=0;
    while(n!=0)
    {
        add = add + n;
        n--;
    }
    return add;
}
// n factorial
int fact(int n)
{
    int prod=1;
    while(n!=1)
    {
        prod = prod*n;
        n--;
    }
}
// sum of digits of a number
int sumdigit(int n)
{
    int add=0;
    while(n!=0)
    {
    int lastdigit = n%10;
    n=n/10;
    add = add + lastdigit;
    }
    return add;
}
// nCr function
int nCr(int n ,int r)
{
    int ans = fact(n)/(fact(r)*fact(n-r));
}
// prime number
int isprime(int n)
{
    int count = 0;
    for(int i=2;i<n;i++)
    { 
        if(n%i==0){
            count++;
        }
    }
}
int main()
{
   cout<<sum(5);
   cout<<endl;
   cout<<fact(5);
   cout<<endl;
   cout<<sumdigit(5674);
   cout<<endl;
   cout<<nCr(8,2);
   return 0;
}