#include<iostream>
using namespace std;
int singleNumber(int size,int arr[])
{
     for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int k=0;
    for(int i=0;i<size;i++)
    {
        k = arr[i]^k;
    }
    return k;
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    cout<<singleNumber(size,arr);
}