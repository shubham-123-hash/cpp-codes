#include<iostream>
#include<algorithm>
using namespace std;
void bubblesort(int nums[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-(i+1);j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {5,7,2,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}