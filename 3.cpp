
#include<iostream>
using namespace std;
int main(){
    int size=6;
    int num[size]={45,65,23,1,45,98};
    int smallest = num[0];
    for(int i=1;i<=size;i++){
        if(num[i]<smallest){
            smallest=num[i];
        }
      }
    cout<<"smallest no. = "<<smallest;
    return 0;
}