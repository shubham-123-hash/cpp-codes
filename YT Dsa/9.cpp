#include<iostream>
using namespace std;
int linearsearch(int size,int target,int arr[])
{
   for(int i=0;i<size;i++)
   {
     if(arr[i]==target)
     {
        return i;
     }
   }
   return -1;
}
int main()
{
    int size=1;
    int target=7;
    int arr[]={5,6,9,3,7,8,1};
    cout<<linearsearch(size,target,arr);
}