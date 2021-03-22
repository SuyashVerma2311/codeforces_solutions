#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, tmp1, tmp2;
        double out=0;
        cin>>n;
        vector<int> miners, diamonds;
        for(int i=0; i<2*n; i++)
        {
            cin>>tmp1>>tmp2;
            if(tmp1==0) miners.push_back(abs(tmp2));
            else if(tmp2==0) diamonds.push_back(abs(tmp1));
        }
        sort(miners.begin(), miners.end());
        sort(diamonds.begin(), diamonds.end());
        vector<int>::iterator it=miners.begin(), itt=diamonds.begin();
        while(it!=miners.end() && itt!=diamonds.end())
        {
            int a = *it, b = *itt;
            out+=sqrt(1.0*a*a+1.0*b*b);
            it++; itt++;
        }
        printf("%.15lf\n",out);
    }
}