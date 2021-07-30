#include <iostream>
using namespace std;

int main() {
    long long int n, k;
    cin>>n;
    k = (n*(n+1)/2) + (n*(n-1)) + ((n-2)*(n-1)/2);
    cout<<k;
}