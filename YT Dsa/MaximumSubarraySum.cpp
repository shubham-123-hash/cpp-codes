#include <iostream>
using namespace std;
int main()
{
    int n = 7, sum , Maxsum = INT8_MIN;
    int arr[n] = {3,-4,5,4,-1,7,-8};
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            sum = 0;
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
                sum = sum + arr[i];
                if(sum > Maxsum)
                {
                    Maxsum = sum;
                }
            }
            cout << "  ";
        }
        cout << endl;
    }
    cout<<Maxsum;
}