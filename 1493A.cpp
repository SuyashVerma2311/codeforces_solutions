#include <bits/stdc++.h>
using namespace std;
    
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, count=0;
        cin>>n>>k;
        stack<int> num;
        for(int i=1; i<=n; i++)
        {
            if(i>k || (i<k && k%2==1 && i>(int(k/2))) || (i<k && k%2==0 && i>=(int(k/2)))) 
            {
                count++;
                num.push(i);
            }
        }
        cout<<count<<endl;
        if(count>0)
        {
            cout<<num.top();
            num.pop();
            while(!num.empty())
            {
                cout<<" "<<num.top();
                num.pop();
            }
            cout<<endl;
        }
        else cout<<endl;
    }
    return 0;
}