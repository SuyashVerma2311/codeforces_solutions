#include <bits/stdc++.h>
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define per(i, a, b) for (int i = a; i >= b; i--)
using namespace std;
    
typedef unsigned long long ull;
typedef pair <int, int> pii;
typedef long long ll;
    
template <typename T>
inline void read(T &f) {
    f = 0; T fu = 1; char c = getchar();
    while (c < '0' || c > '9') { if (c == '-') { fu = -1; } c = getchar(); }
    while (c >= '0' && c <= '9') { f = (f << 3) + (f << 1) + (c & 15); c = getchar(); }
    f *= fu;
}
    
template <typename T>
void print(T x) {
    if (x < 0) putchar('-'), x = -x;
    if (x < 10) putchar(x + 48);
    else print(x / 10), putchar(x % 10 + 48);
}
    
template <typename T>
void print(T x, char t) {
    print(x); putchar(t);
}
    
const int N = 105;
    
int a[N];
int T, n, k;
    
int main() {
    read(T);
    while (T--) {
        read(n); read(k);
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            read(a[i]);
            int tem = min(k - sum, a[i]);
            a[i] -= tem; sum += tem;
        }
        a[n] += sum;
        for (int i = 1; i <= n; i++) print(a[i], i == n ? '\n' : ' ');
    }
    return 0;
}