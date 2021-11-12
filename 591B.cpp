#include <bits/stdc++.h>
using namespace std;
    
void FASTIO() {ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
    
int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w",stdout);
    #endif
    FASTIO();
    
    int n,m; cin>>n>>m;
    string name; cin>>name;
    
    vector<int> temp;
    vector<vector<char>> reps(m, (vector<char>){0,0});
    
    for(vector<char> &v: reps)
        for(char &x: v)
            cin>>x;
    
    unordered_map<char, vector<int>> hash;
    
    for(int i=0; i<n; i++)
        hash[name[i]].push_back(i);
    
    for(auto v: reps)
        hash[v[0]].swap(hash[v[1]]);

    
    string out(n,'0');
    
    for(auto x: hash) {
        for(int i: x.second)
            out[i] = x.first;
    }
    
    cout<<out;
}