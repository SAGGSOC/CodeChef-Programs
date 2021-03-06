#include <stdio.h>
#include <algorithm>
using namespace std;
#define ll long long
#define LIM 100111

int I[LIM];

int main() {
    for (int j = 0; j < LIM; j++) I[j] = -1;

    int n, k;
    scanf("%d%d", &n, &k);

    ll total = n*(n+1LL) >> 1;
    int pi = 0, pj = 1;
    #define add_pair(ci,cj) do {\
        total += pi * (pj - (cj));\
        pi = ci;\
        pj = (cj);\
    } while (0)

    int l = 0;
    for (int j = 1; j <= n; j++) {
        int a;
        scanf("%d", &a);
        if (a == k) {
            l = j;
        } else if (a > k) {
            int i = max(I[a], l);
            if (pi < i) {
                add_pair(i, j);
            }

            a -= k;
            for (int v = 1; v * v <= a; v++) {
                if (a % v == 0) I[v] = I[a / v] = j;
            }
        }
    }

    add_pair(n, n+1);

    printf("%lld\n", total);
}
