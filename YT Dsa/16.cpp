#include<iostream>
#include<vector>
using namespace std;
int returnindex1(vector<int>arr1,int tar1){
    int end=arr1.size(),start = 0;
    while(start<=end)
    {
    int mid = (start + end)/2;
    if(arr1[mid]>tar1)
    {
        end = mid-1;
    }
    else if(arr1[mid]<tar1)
    {
        start=mid+1;
    }
    else if(arr1[mid]==tar1)
    {
        return mid;
    }
    }
    return -1;
}
//int returnindex2(vector<int>arr2,int tar2){

//}
int main(){
    vector<int>arr1={-1,0,3,4,5,9,12};
    int tar1 = 5;

    // vector<int>arr2={-1,0,3,5,9,12};
    // int tar2 = 0;

    int k = returnindex1(arr1,tar1);
    //int l = returnindex2(arr2,tar2);
    cout<<k;
}