#include<iostream>
using namespace std;
int Searchindex(int nums[],int n,int target){
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={3,5,1,7,9,4,2},target = 7;
    int size = sizeof(arr)/sizeof(int);
    cout<<Searchindex(arr,size,target);
}