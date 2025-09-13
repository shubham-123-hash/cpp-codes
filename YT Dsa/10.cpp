#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={12,43,56,43,51,67};
    vec.push_back(40);
    vec.pop_back();
    for(int i:vec)
    {
        cout<<i<<endl;
    }
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
}