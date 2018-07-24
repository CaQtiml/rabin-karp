#include <bits/stdc++.h>
#define pii pair<int, int>
#define x first
#define y second
using namespace std;

const int N = 1e6+5;

char A[N], B[N];
int n, m, ans;

pii hash(131, 133);
pii add(pii a, pii b) { return pii(a.x + b.x, a.y + b.y); }
pii mul(pii a, pii b) { return pii(a.x * b.x, a.y * b.y); }
pii sub(pii a, pii b) { return pii(a.x - b.x, a.y - b.y); }

int main() {
    scanf("%s %s", A, B);
    n = strlen(A), m = strlen(B);
    pii h(1, 1), h1(0, 0), h2(0, 0);
    for(int i = 0; i < m; ++i) {
        h = mul(h, hash);
        h1 = add(mul(h1, hash), pii(A[i], A[i]));
        h2 = add(mul(h2, hash), pii(B[i], B[i]));
    }
    if(h1 == h2) ans++;
    for(int i = m; i < n; ++i) {
        h1 = add(mul(h1, hash), sub(pii(A[i], A[i]), mul(h, pii(A[i-m], A[i-m])))); //sliding window
        if(h1 == h2) ans++;
    }
    printf("%d\n", ans);
}
