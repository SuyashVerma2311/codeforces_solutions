#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float n;
        int k;
        string s;
        cin>>n>>k;
        cin>>s;
        string::iterator it=s.begin();
        string::reverse_iterator itt=s.rbegin();
        for(int i=0; i<int((n/2)-0.3); i++)
        {
            char in=*it, inn=*itt;
            if(in==inn)
            {
                it++; itt++;
                k--;
            }
            else break;
        }
        if(k<=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}