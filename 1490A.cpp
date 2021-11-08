    #include <iostream>
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
            int now, prev;
            while(n--)
            {
                cin>>now;
                if(first_time==false)
                {
                    float more=max(prev,now), less=min(prev,now);
                    while((more/less)>2)
                    {
                        less = less*2;
                        add_count++;
                    }
                }
                prev = now;
                first_time = false;
            }
            cout<<add_count<<endl;
        }
        return 0;
    }