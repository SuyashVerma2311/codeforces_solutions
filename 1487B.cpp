#include <iostream>
using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%2==0) cout<<(k-1)%n + 1<<endl;
        else cout<<(k-1+((k-1)/((n-1)/2)))%n+1<<endl;
    }
    return 0;
}