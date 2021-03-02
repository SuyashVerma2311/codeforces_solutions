#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, tmp, c0=0, c1=0, c2=0, count=0;
        cin>>n;
        int tgt = n/3;
        while(n--)
        {
            cin>>tmp;
            if(tmp%3==0) c0++;
            else if(tmp%3==1) c1++;
            else c2++;
        }
        while(c0!=tgt || c1!=tgt || c2!=tgt)
        {
            if(c0>tgt)
            {
                count += c0-tgt;
                c1 += c0-tgt;
                c0 = tgt;
            }
            if(c1>tgt)
            {
                count += c1-tgt;
                c2 += c1-tgt;
                c1 = tgt;
            }
            if(c2>tgt)
            {
                count += c2-tgt;
                c0 += c2-tgt;
                c2 = tgt;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}