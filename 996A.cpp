#include <iostream>
using namespace std;

int main() {
    int n; cin>>n;

    int out=0;
    
    out+= n/100;
    n%=100;

    out+= n/20;
    n%=20;

    out+= n/10;
    n%=10;

    out+= n/5;
    n%=5;

    out+= n;

    cout<<out;
}