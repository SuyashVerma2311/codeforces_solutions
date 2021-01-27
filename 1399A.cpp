#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n!=1)
        {
            bool fact=true;
            int num[n];
            for(int i=0; i<n; i++)
            {
                cin>>num[i];
            }
            sort(num, num+n);
            for(int i=1; i<n; i++)
            {
                if(fact==true && num[i] - num[i-1]<=1) fact=true;
                else fact=false;
            }
            fact==true ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        }
        else
        {
            cin>>n;
            cout<<"YES"<<endl;
        }
    }
    return 0;
}