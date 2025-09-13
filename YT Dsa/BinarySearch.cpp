#include<iostream>
using namespace std;
void bubblesort(int sort[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-(i+1);j++){
            if(sort[j]>sort[j+1]){
                swap(sort[j],sort[j+1]);
            }
        }
    }
}
int Searchindex(int nums[],int x,int target){
    bubblesort(nums,x);
    int start = 0,end = x-1;
    int mid = start + (end-start)/2;
    if(target>nums[mid]){
        start = mid+1;
    }
    else if(target<nums[mid]){
        end = mid-1;
    }
    else
    {
        return mid;
    }
}
int main(){
    int arr[]={3,5,1,7,9,4,2},target = 4;
    int size = sizeof(arr)/sizeof(int);
    cout<<Searchindex(arr,size,target);
}