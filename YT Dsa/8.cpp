#include<iostream>
using namespace std;
void fun(int size, int marks[])
{
    int largest= 0;
    for(int i=0;i<size;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<size;i++)
    {
        if(marks[i]>largest)
        {
            largest=marks[i];
        }
    }
    cout<<largest<<endl;
}
int main()
{
    int size;
    cin>>size;
    int marks[size];
    fun(size,marks);
}