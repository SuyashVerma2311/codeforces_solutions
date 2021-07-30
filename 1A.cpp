#include <iostream>
using namespace std;

int main() {
    long long int n,m,a; cin>>n>>m>>a;
    long long int f1 = n%a==0 ? n/a : (n/a)+1, f2 = m%a==0 ? m/a : m/a+1;
    cout<<f1*f2;
}