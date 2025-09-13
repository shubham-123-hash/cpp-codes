#include<iostream>
using namespace std;
class Reactangle
{     int l,b;
 public:
 void input()
 {
    cin>>l>>b;
 }
    int area()
    {
        return (l*b);
    }
    void parameter(
        
    )
    {
        cout<<"parametter is "<<2*(l+b);
    }
};
int main(){
    Reactangle ob;
    ob.input();
    cout<<ob.area()<<endl;
    ob.parameter();
    return 1000;
}