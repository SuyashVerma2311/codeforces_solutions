#include <iostream>
using namespace std;

int main()
{
    int t, w, h, sheets, area=0;
    long n;
    bool fact = false;
    cin>>t;
    while(t--)
    {
        sheets = 1;
        cin>>w>>h>>n;
        area = w * h;
        while(true)
        {
            if(area%2==0)
            {
                area = area / 2;
                sheets = sheets * 2;
                if(sheets>=n) break;
            }
            else break;
        }
        (sheets>=n) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}