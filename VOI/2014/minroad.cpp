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
    ll n, a, b;
    ll dp[2];
    memset(dp, 0, sizeof(dp));
    vp v;
    cin >> n >> a >> b;
    foru(i, 0, n - 1) {
        ll x, y;
        cin >> x >> y;
        v.push_back({ x, y });
    }
    sort(all(v));
    ll i = -1, ans = 1e9;
    foru(k, 0, n - 1) {
        if (k) --dp[(v[k - 1].second) & 1];
        while ((dp[1] < a || dp[0] < b) && i < n) ++dp[(v[++i].second) & 1];
        if (i == n) break;
	  minimize(ans, v[i].first - v[k].first);
    }
    cout << (ans == 1e9 ? -1 : ans);
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