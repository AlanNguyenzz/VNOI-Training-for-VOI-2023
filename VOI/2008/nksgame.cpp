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
#define qsort(a, n) sort(a + 1, a + 1 + n)
#define qrev(a, n) reverse(a + 1, a + 1 + n)
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
	ll n, m, ans = oo;
	ll a[100009], b[100009];
	cin >> n;
	m = n;
	foru(i, 1, n) {
		cin >> a[i];
	}
	foru(i, 1, m) {
		cin >> b[i];
	}
	qsort(a, n);
	qsort(b, m);
	qrev(b, m);
	ll i = 1, j = 1;
	while (i <= n && j <= m) {
		minimize(ans, abs(a[i] + b[j]));
		if (a[i] + b[j] > 0) j++;
		else if (a[i] + b[j] < 0) i++;
		else {
			cout << 0;
			return;
		}
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