#include <iostream>
using namespace std;

int main()
{
    int t, n, l, one_count=0, two_count=0;
    cin>>t;
    for(int i=t; i>0; i--)
    {
        one_count = 0;
        two_count = 0;
        cin>>n;
        int sum = 0;
        for(int j=n-1; j>=0; j--)
        {
            cin>>l;
            if(l==1)
            {
                one_count += 1;
            }
            else
            {
                two_count += 1;
            }
            
            sum += l;
        }
        if(sum%2==0 && (one_count!=0 || two_count%2 ==0))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}