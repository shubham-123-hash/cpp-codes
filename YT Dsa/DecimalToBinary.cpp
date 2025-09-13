#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int Decimaltobinary(int n){
    vector<int>ans;
    int num = 0;
    while(n!=0){
        int lastdigit = n%2;
        n=n/2;
        ans.push_back(lastdigit);
    }
    for(int i=ans.size()-1;i>=0;i--){
        num = num*10 + ans[i];
    }
    return num;
}
int main(){
    int n;
    cout<<"enter decimal number"<<endl;
    cin>>n;
    cout<<Decimaltobinary(n);
}