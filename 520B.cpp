#include <iostream>
using namespace std;

int main()
{
    int n,m, count=0;
    cin>>n>>m;
    if(m<n)
    {
        cout<<n-m<<endl;
    }
    else
    {
        while(m>n)
        {
            if(m%2==0)
            {
                m/=2;
                count++;
            }
            else
            {
                m++;
                count++;
            }
            if(m==n) break;
        }
        cout<<count+(n-m)<<endl;
    }
    
}