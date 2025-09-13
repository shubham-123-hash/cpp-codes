#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr = {4,8,1,9,7};
    int size = arr.size();
    for(int i=0;i<size-2;i++)
    {
        if(arr[i]>arr[i+1])
        {
            arr[i]=arr[i];
        }
        else
        {
            arr[i]=arr[i+1];
        }
    }
    for(int x : arr){
        cout<<x<<" ";
    }
}