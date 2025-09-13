#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,ans=0;
    cin>>n;
     while(n!=0)
       {
            int lastdigit=n%10;
            n=n/10;
            if(lastdigit==0)
            {
                lastdigit=5;
            }
            rev = rev*10+lastdigit;
       }
         while(rev!=0)
         {
            int lastdigit = rev%10;
            rev=rev/10;
            ans = ans*10+lastdigit;
         }
         cout<<ans;
}