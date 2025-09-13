#include<iostream>
#include<vector>
using namespace std;
int returnindexelement(int key,vector<int>&arr)
{
    return arr[key];
}
int main(){
    vector<int>nums={23,54,67,93,47,85};
    int k = 4;
    int ans = returnindexelement(k,nums);
    cout<<ans;
}