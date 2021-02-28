#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int min_freq=1, min=101, val, m=n;
        while(m--)
        {
            cin>>val;
            if(val<min)
            {
                min = val;
                min_freq = 1;
            }
            else if(val==min) min_freq++;
        }
        cout<<n-min_freq<<endl;
    }
    return 0;
}