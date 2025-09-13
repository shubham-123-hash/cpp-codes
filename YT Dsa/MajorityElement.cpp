#include<iostream>
#include<vector>
using namespace std;
int Majority(vector<int>nums,int n)
{
    int count;
    for(int i=0;i<n;i++)
    {
        count = 1;
        for(int j=i+1;j<n;j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
            }
        }
        if(count > n/2)
        {
            return nums[i];
        }
    }
    return -1;
}
int main()
{
    vector<int>nums={2,2,1,1,1,2,2};
    int n = nums.size();
    int k = Majority(nums,n);
    cout<<k<<endl;
    return 0;
}