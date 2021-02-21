#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, add_count=0;
        bool first_time = true;
        cin>>n;
        int now,prev;
        while(n--)
        {
            cin>>now;
            if(first_time==false)
            {
                float more=max(prev,now), lesser=min(prev,now);
                
                //cout<<more<<" "<<lesser<<endl;
                float ratio_cur=more/lesser;
                //cout<<"ratio is"<<ratio_cur<<endl;
                if(ratio_cur>2){
                    if(int(log2(ratio_cur))==log2(ratio_cur))
                       {
                         add_count+=(log2(ratio_cur)-1);
                        //cout<<"numbers inserted between "<<more<<" "<<less<<" "<<log2(ratio)-1<<endl;
                       }
                    else
                    {
                         add_count+=floor(log2(ratio_cur));
                        //cout<<"numbers inserted between "<<more<<" "<<less<<" "<<ceil(log2(ratio))<<endl;
                    }

                }
            }
            prev = now;
            first_time = false;
        }
        cout<<add_count<<endl;
    }
    return 0;
}

/* Code below should have worked perfectly, but the compiler fails due to some reason.....thus the different code. */ 

// #include <iostream>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n, add_count=0;
//         bool first_time = true;
//         cin>>n;
//         while(n--)
//         {
//             int now, prev;
//             cin>>now;
//             if(first_time==false)
//             {
//                 float more=max(prev,now), less=min(prev,now);
//                 while((more/less)>2)
//                 {
//                     less = less*2;
//                     add_count++;
//                 }
//             }
//             prev = now;
//             first_time = false;
//         }
//         cout<<add_count<<endl;
//     }
//     return 0;
// }