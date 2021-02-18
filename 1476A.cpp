#include <iostream>
using namespace std;

int main()
{
    int t, n, k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int temp_k = k, fact=1;
        while(n>(fact*k))
        {
            fact = int(n/k);
            if((fact*k)%n!=0) fact++;
        }
        k = fact*k;
        int max = int(k/n);
        if(k%n!=0) max++;
        cout<<max<<endl;
    }
}