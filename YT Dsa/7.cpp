#include<iostream>
#include<math.h>
using namespace std;
int decmialtobinary(int n)
{
    int num=0,x=0;
   while(n!=0)
   {
      int rem = n%2;
      n=n/2;
      num = num + rem*pow(10,x);
      x++;
   }
   return num;
}
int main()
{
   cout<<decmialtobinary(50);
}