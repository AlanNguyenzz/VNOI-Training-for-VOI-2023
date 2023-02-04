#include<bits/stdc++.h>

/*__________________________________________________________*/

/*________________________start_typedef_____________________*/

typedef float ft;
typedef double db;
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;

/*_________________________end_typedef______________________*/

/*__________________________________________________________*/

/*_______________________start_define_______________________*/

#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define foru(a, b, c) for(ll a = b; a <= c; ++a)
#define ford(a, b, c) for(ll a = b; a >= c; --a)
#define fora(a, b) for(auto &a : b)
#define all(a) a.begin(), a.end()
#define sz(s) (ll)(s).size()
#define __lcm(a, b) (ll)(a * b) / __gcd(a, b)
#define qsort(a) sort(a + 1, a + 1 + n)
#define qrev(a) reverse(a + 1, a + 1 + n)
#define el '\n'
#define EL cout << el;
#define pre(x) cout.precision(x);
#define maximize(a, b) a = (a > b ? a : b)
#define minimize(a, b) a = (a < b ? a : b) 
#define debug(x) cerr << "[ " << #x << " ] : " << x << ' ';

/*_________________________end_define_______________________*/

/*__________________________________________________________*/

/*_________________________start_const______________________*/

const ll oo = LLONG_MAX;
const ll M = (ll)1e9 + 7;
const ll MxN = (ll)1e5 + 5;
const db pi = acos(-1.0);

/*__________________________end_const_______________________*/

/*____________________From_IK30_With_Love_<3________________*/

using namespace std;
using vll = vector<ll>;
using pll = pair<ll, ll>;
using vp = vector<pll>;
using vv = vector<vll>;

void file() {
//#ifdef ONLINE_JUDGE
	//freopen("POINTS.INP", "r", stdin);
	//freopen("POINTS.OUT", "w", stdout);
//#endif
}

void solve() {
	ll n, x, y;
	ll a[1000009], b[1000009];
	cin >> n;
	foru(i, 1, n)
		cin >> a[i];
	qsort(a);
	foru(i, 1, n)
		cin >> b[i];
	qsort(b);
	ll used_x, used_y;
	x = y = 1;
	ll ans = 0;
	while (true) {
		ans++;
		used_x = x + 1;
		used_y = y + 1;
		if (used_x > n || used_y > n) break;
		while (a[used_x] <= b[y] && used_x < n)
			used_x++;
		while (b[used_y] <= a[x] && used_y < n)
			used_y++;
		if (a[used_x] <= b[y] || b[used_y] <= a[x]) break;
		x = used_x;
		y = used_y;
	}
	cout << ans;
}

int main() {
	faster;
	ll test = 1;
	//cin >> test;
	while(test--)
		solve();
	return 0;
}

//  グエ・cチャン・ハ・アン <3