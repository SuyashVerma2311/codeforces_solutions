#include <iostream>
using namespace std;

int main()
{
    int t;
    long long p,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>p>>a>>b>>c;
        long long diff_a, diff_b, diff_c, time;
        diff_a = a*((long long)(p/a))-p;
        if(diff_a<0) diff_a=diff_a+a;
        diff_b = b*((long long)(p/b))-p;
        if(diff_b<0) diff_b=diff_b+b;
        diff_c = c*((long long)(p/c))-p;
        if(diff_c<0) diff_c=diff_c+c;
        time = min(diff_a, diff_b);
        time = min(diff_c, time);
        cout<<time<<endl;
    }
    return 0;
}