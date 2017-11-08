#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <ctime>
#include <cstring>
#include <cassert>
#include <bitset>
#include <sstream>
#include <queue>
 
#define pb push_back
#define mp make_pair
#define fs first
#define sc second
#define sz(a) ((int) (a).size())
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
 
using namespace std;
 
typedef long long int64;
typedef long double ldb;
 
const long double eps = 1e-9;
const int inf = (1 << 30) - 1;
const long long inf64 = ((long long)1 << 62) - 1;
const long double pi = acos(-1);
 
template <class T> T sqr (T x) {return x * x;}
template <class T> T abs (T x) {return x < 0 ? -x : x;}
 
const int MAXLOG = 20;
 
void DFS(const vector<vector<int>>& adj,
		 vector<int>& p, vector<int>& h,
	     int cur_v, int cur_p, int cur_h) {
	p[cur_v] = cur_p;
	h[cur_v] = cur_h;
	for (int i = 0; i < sz(adj[cur_v]); ++i) {
		if (adj[cur_v][i] != cur_p) {
			DFS(adj, p, h, adj[cur_v][i], cur_v, cur_h + 1);
		}
	}
}
 
pair<int, int> Get(const vector<int>& h,
				   const vector<vector<int>>& p,
				   const vector<vector<int>>& max_ind,
				   const vector<vector<int>>& min_ind,
				   int v1, int v2) {
	if (h[v1] < h[v2]) {
		swap(v1, v2);
	}
 
	pair<int, int> res = mp(inf, -inf);
	for (int i = MAXLOG - 1; i >= 0; --i) {
		if (h[v1] - (1 << i) >= h[v2]) {
			res.fs = min(res.fs, min_ind[i][v1]);
			res.sc = max(res.sc, max_ind[i][v1]);
			v1 = p[i][v1];
		}
	}
 
	for (int i = MAXLOG - 1; i >= 0; --i) {
		if (p[i][v1] != p[i][v2]) {
			res.fs = min(res.fs, min(min_ind[i][v1], min_ind[i][v2]));
			res.sc = max(res.sc, max(max_ind[i][v1], max_ind[i][v2]));
			v1 = p[i][v1];
			v2 = p[i][v2];
		}
	}
 
	res.fs = min(res.fs, min(v1, v2));
	res.sc = max(res.sc, max(v1, v2));
 
	if (v1 != v2) {
		int v = p[0][v1];
		res.fs = min(res.fs, v);
		res.sc = max(res.sc, v);
	}
 
	return res;
}
 
int main () {
    ios_base::sync_with_stdio(0);
//	freopen("input.txt", "rt", stdin);
//	freopen("output.txt", "wt", stdout);
 
 
	int tc;
	cin >> tc;
	for (int ti = 0; ti < tc; ++ti) {
		int n;
		cin >> n;
 
		vector<vector<int>> adj(n);
		for (int i = 0; i < n - 1; ++i) {
			int v1, v2;
			cin >> v1 >> v2;
			--v1, --v2;
			
			adj[v1].pb(v2);
			adj[v2].pb(v1);
		}
 
		vector<vector<int>> p(MAXLOG, vector<int>(n));
		vector<int> h(n);
 
		DFS(adj, p[0], h, 0, 0, 0);
 
		vector<vector<int>> max_ind(MAXLOG, vector<int>(n));
		vector<vector<int>> min_ind(MAXLOG, vector<int>(n));
		for (int i = 0; i < n; ++i) {
			max_ind[0][i] = i;
			min_ind[0][i] = i;
		}
 
		for (int i = 1; i < MAXLOG; ++i) {
			for (int j = 0; j < n; ++j) {
				p[i][j] = p[i - 1][p[i - 1][j]];
				max_ind[i][j] = max(max_ind[i - 1][j], max_ind[i - 1][p[i - 1][j]]);
				min_ind[i][j] = min(min_ind[i - 1][j], min_ind[i - 1][p[i - 1][j]]);
			}
		}
 
		
		vector<int> min_stat(n);
		vector<int> max_stat(n);
		for (int i = 0; i + 1 < n; ++i) {
			pair<int, int> min_max = Get(h, p, max_ind, min_ind, i, i + 1);
			min_stat[i] = min_max.fs;
			max_stat[i] = min_max.sc;
		}
		min_stat[n - 1] = -inf;
		max_stat[n - 1] = inf;
 
		vector<int> next_min(n);
		next_min[n - 1] = n;
		for (int i = n - 2; i >= 0; --i) {
			next_min[i] = i + 1;
			while (next_min[i] != n && min_stat[i] <= min_stat[next_min[i]]) {
				next_min[i] = next_min[next_min[i]];
			}
		}
 
		long long res = 0;
		vector<int> st_max;
		for (int i = n - 1; i >= 0; --i) {
			while (!st_max.empty() && st_max.back() < max_stat[i]) {
				st_max.pop_back();
			}
			st_max.pb(i);
 
			if (min_stat[i] < i) {
				++res;
			} else {
				int before = next_min[i];
 
				int ll = 0;
				int rr = sz(st_max);
				while (ll < rr) {
					int mm = (ll + rr) / 2;
					if (st_max[mm] <= before) {
						rr = mm;
					} else {
						ll = mm + 1;
					}
				}
 
                res += sz(st_max) - ll;
			}
		}
 
		cout << res << "\n";
	}
 
 
 
 
 
	return 0;
}
