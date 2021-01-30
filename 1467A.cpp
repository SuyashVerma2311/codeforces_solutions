#include <iostream>

using namespace std;

int main()
{
    int t, n;
    char char_k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char str_num[n];
        str_num[0] = 0;
        int int_k = 0;
        str_num[0] = '9';
        if(n>=2) str_num[1] = '8';
        if(n>=3) str_num[2] = '9';
        if(n>3)
        {
            for(int i=3; i<n; i++)
            {
                char_k = int_k + '0';
                str_num[i] = char_k;
                if(int_k==9)
                    int_k=0;
                else
                    int_k += 1;
            }
        }
        str_num[n] = '\0';
        cout<<str_num<<endl;
    }
    return 0;
}
