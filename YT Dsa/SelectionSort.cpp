#include<iostream>
using namespace std;
void SelectionSort(int nums[],int n){
    for(int i=0;i<n-1;i++){
        int smallestindex = i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[smallestindex]){
                smallestindex=j;
            }
        }
        swap(nums[i],nums[smallestindex]);
    }
}
int main(){
    int arr[]={4,2,5,1,3};
    int size = sizeof(arr)/sizeof(int);
    SelectionSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}