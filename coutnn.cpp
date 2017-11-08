CodeChef is a non-commercial competitive programming community  Hello 1?sagarshiv_12 9  
Logout
PRACTICE
COMPETE
DISCUSS
COMMUNITY
HELP
ABOUT
Home  » August Challenge 2015 » Chef and insomnia » All Submissions » vishfrnds [7827835]
Solution: 7827835
CodeChef submission 7827835 (C++ 6.3) plaintext list. Status: AC, problem CHINSM, contest AUG15. By vishfrnds (vishfrnds), 2015-08-16 17:06:23.
/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
 * Created By : Vishwas Tripathi 
 * CSE, MNNIT-ALLAHABAD 
 * vishfrnds@gmail.com
 _._._._._._._._._._._._._._._._._._._._._.*/
 
 
#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <set>
#include <assert.h>
using namespace std;
 
#define MP make_pair
#define pb push_back
#define rep(i,n) for(i=0;i<n;i++)
#define REP(i,a,b) for(i=a;i<=b;i++)
#define PER(i,a,b) for(i=b;i>=a;i--)
#define X first
#define Y second
#define all(c) c.begin(),c.end() //eg sort(all(v));
 
#define tr(c, itr) for(itr = (c).begin(); itr != (c).end(); itr++)
#define present(container, element) (container.find(element) != container.end()) //for set,map,etc
#define cpresent(container, element) (find(all(container),element) != container.end()) //for vectors
 
 typedef long long ll;
 typedef vector<int> vi; 
 typedef vector< vi > vvi; 
 typedef pair< int,int > ii; 
 
#define sz(a) int((a).size())
#define clr(a) memset(a,0,sizeof(a))
#define ini(a) memset(a,-1,sizeof(a))
 
 
//i/o
#define inp(n) scanf("%d",&n)
#define inp2(n,m) inp(n), inp(m)
#define ins(s) scanf("%s",s);
#define out(n) printf("%d\n",n)
#define out2(n,m) printf("%d %d\n",n,m)
#define inc(n) scanf("%c",&n)
 
#define inll(n) scanf("%lld",&n)
#define inll2(n,m) scanf("%lld%lld",&n,&m)
#define outll(n) printf("%lld\n",n)
#define outll(n) printf("%lld\n",n)
#define outll2(n,m) printf("%lld %lld\n",n,m)
 
 
 
//cost
#define MOD 1000000007
#define MOD_INV 1000000006
#define MAX 100009
#define INF 999999999
 
#define chk(a) cerr << endl << #a << " : " << a << endl
#define chk2(a,b) cerr << endl << #a << " : " << a << "\t" << #b << " : " << b << endl
#define chk3(a,b,c) cerr << endl << #a << " : " << a << "\t" << #b << " : " << b << "\t" << #c << " : " << c << endl
#define chk4(a,b,c,d) cerr << endl << #a << " : " << a << "\t" << #b << " : " << b << "\t" << #c << " : " << c << "\t" << #d << " : " << d << endl
 
int main()
{
	int k, n, m, i, j, x, t;
	t = 1;
	//cin >> t;
	while (t--) {
	inp2 (n, k);
	int arr[n];
	rep (i, n) 
		inp (arr[i]);
	vector<int> mp(100009, -1);
	vector<int> mark(100009, -1);
	vector<int> toRefresh(100009, 0);
	ll ans = 0;
	j = n;
	for (i = n - 1; i >= 0; i--) {
		if (mark[arr[i]] != -1) {
			j = min (j, mp[mark[arr[i]]]);
		}
		//chk2 (i, j);
		ans += (j - i);
		if (arr[i] > k) {
			if (mp[arr[i]] == -1 || toRefresh [arr[i]]) {
				ll val = arr[i];
				while (val + k < 100009) {
					if (mark[val + k] != -1)
						toRefresh[mark[val + k]] = 1;
					mark[val + k] = arr[i];
					val += arr[i];
				}
		}
			mp[arr[i]] = i;
			mark[k] = arr[i];
		}
	}
	/*
	ll ans2 = 0;
	
	rep (i, n) {
		REP (j, i, n - 1) {
			bool pos = true;
			for (int ii = i; ii <= j && pos; ii++) {
				for (int jj = ii + 1; jj <= j  && pos; jj++) {
					if (arr[ii] % arr[jj] == k)
						pos = false;
				}
			}
			if (pos) {
				ans2++;
			//	chk2 (i, j);
			}
		}
	}
	chk2 (ans, ans2);
	assert (ans == ans2);
	//
	*/
	outll (ans);
}
    return 0;
}
 
Submission Info:
Sub-Task	Task #	Score	Result
(time)
1	0	NA	AC
(0.000000)
1	1	NA	AC
(0.000000)
1	15	NA	AC
(0.000000)
1	16	NA	AC
(0.000000)
Final Score - 15.000000	Result - AC
2	2	NA	AC
(0.000000)
2	3	NA	AC
(0.010000)
2	17	NA	AC
(0.000000)
2	18	NA	AC
(0.000000)
Final Score - 15.000000	Result - AC
3	4	NA	AC
(0.000000)
3	5	NA	AC
(0.010000)
3	13	NA	AC
(0.010000)
3	19	NA	AC
(0.020000)
Final Score - 10.000000	Result - AC
4	6	NA	AC
(0.000000)
4	7	NA	AC
(0.020000)
4	8	NA	AC
(0.010000)
4	9	NA	AC
(0.020000)
4	10	NA	AC
(0.010000)
4	11	NA	AC
(0.010000)
4	12	NA	AC
(0.010000)
4	14	NA	AC
(0.010000)
Final Score - 60.000000	Result - AC
Comments 
CodeChef is a non-commercial competitive programming community
About CodeChef About Directi CEO's Corner C-Programming Programming Languages Contact Us
© 2009 Directi Group. All Rights Reserved. CodeChef uses SPOJ © by Sphere Research Labs
In order to report copyright violations of any kind, send in an email to copyright@codechef.com
CodeChef a product of Directi
The time now is: 04:00:03 PM
Your IP: 14.139.242.109
CodeChef - A Platform for Aspiring Programmers 
CodeChef was created as a platform to help programmers make it big in the world of algorithms, computer programming and programming contests. At CodeChef we work hard to revive the geek in you by hosting a programming contest at the start of the month and another smaller programming challenge in the middle of the month. We also aim to have training sessions and discussions related to algorithms, binary search, technicalities like array size and the likes. Apart from providing a platform for programming competitions, CodeChef also has various algorithm tutorials and forum discussions to help those who are new to the world of computer programming.
Practice Section - A Place to hone your 'Computer Programming Skills' 
Try your hand at one of our many practice problems and submit your solution in a language of your choice. Our programming contest judge accepts solutions in over 35+ programming languages. Preparing for coding contests were never this much fun! Receive points, and move up through the CodeChef ranks. Use our practice section to better prepare yourself for the multiple programming challenges that take place through-out the month on CodeChef.
Compete - Monthly Programming Contests and Cook-offs 
Here is where you can show off your computer programming skills. Take part in our 10 day long monthly coding contest and the shorter format Cook-off coding contest. Put yourself up for recognition and win great prizes. Our programming contests have prizes worth up to INR 20,000 (for Indian Community), $700 (for Global Community) and lots more CodeChef goodies up for grabs.

Programming Tools	Practice Problems	Initiatives
Online IDE	Easy	Go for Gold
Upcoming Coding Contests	Medium	CodeChef for Schools
Contest Hosting	Hard	Campus Chapters
Problem Setting	Challenge	
CodeChef Tutorials	Peer	
CodeChef Wiki	School	
FAQ's	

