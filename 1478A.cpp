#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a=-1, b=-1, temp_max=1, max_count=1;
        while(n--)
        {
            cin>>a;
            if(a==b) 
            {
                temp_max+=1;
                if(temp_max>max_count) max_count=temp_max;
            }
            else
            {
                if(temp_max>max_count) max_count=temp_max;
                temp_max=1;
            }
            b=a;            
        }
        cout<<max_count<<endl;
    }
    return 0;
}