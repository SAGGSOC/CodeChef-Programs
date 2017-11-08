#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <string>
#include <cstring>
#include <ctime>
#include <cassert>
#include <queue>
#include <stack>
#include <bitset>
#define mp make_pair
#define pb push_back

using namespace std;
	
typedef long long ll;
typedef long double ld;

const ld PI = acos(-1.0);
const int MAXN = 100008;
const int LG = 18;

int n, k, i, j, t, qq, lg, rg, md, mn, g;
int a[MAXN];
int bp[MAXN];
stack <int> st[MAXN];
int rmq[MAXN][LG];
ll ans;
int lt[MAXN];

int main()
{
	//freopen("input.txt", "r", stdin);
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; i++) scanf("%d", a + i);
	for (int i = n; i >= 1; i--) st[a[i]].push(i);
	lt[1] = 0;
	for (int i = 2; i <= n; i++) lt[i] = lt[i / 2] + 1;
	for (int i = 1; i <= n; i++) 
	{
		st[a[i]].pop();
		bp[i] = n + 1;
		if (a[i] <= k) continue;
		t = a[i] - k;
		for (int j = 1; j * j <= t; j++) if (t % j == 0) 
		{
			if (!st[j].empty() && a[i] % t == k) bp[i] = min(bp[i], st[j].top());
			if (!st[t / j].empty() && a[i] % (t / j) == k) bp[i] = min(bp[i], st[t / j].top()); 
		}
	}
	for (int i = 1; i <= n; i++) rmq[i][0] = bp[i];
	for (int i = 1; i < LG; i++) for (int j = 1; j <= n - (1 << i) + 1; j++) 
	{
		rmq[j][i] = min(rmq[j][i - 1], rmq[j + (1 << (i - 1))][i - 1]);
	}
	for (int i = 1; i <= n; i++) 
	{
		lg = i; rg = n; qq = i;
		for (int iter = 0; iter < 17; iter++)
		{
			md = (lg + rg) / 2;
			g = lt[md - i + 1];
			mn = min(rmq[i][g], rmq[md - (1 << g) + 1][g]);
			if (mn > md) 
			{
				qq = max(qq, md);
				lg = md + 1;
			} 
			else rg = md;
		}
		ans += qq - i + 1;
	}
	printf("%lld\n", ans);
	return 0;
}
