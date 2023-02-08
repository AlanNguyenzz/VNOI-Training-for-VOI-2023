#include<bits/stdc++.h>
#include<unordered_map>


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
#define debug(x) cerr << "[" << #x << "] : " << x << el

/*_________________________end_define_______________________*/

/*__________________________________________________________*/

/*_________________________start_const______________________*/

const ll oo = LLONG_MAX;
const ll M = (ll)1e9;
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
	#ifdef ONLINE_JUDGE
		freopen("DEG.INP", "r", stdin);
		freopen("DEG.OUT", "w", stdout);
	#endif
}

void solve() {
	string s, t;
	cin >> s >> t;
	vv dp(sz(s) + 1, vll(sz(t) + 1, 0));
	foru(i, 1, sz(s)) {
		foru(j, 1, sz(t)) {
			dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			if (s[i - 1] == t[j - 1])
				maximize(dp[i][j], dp[i - 1][j - 1] + 1);
		}
	}
	string ans = "";
	ll i = sz(s), j = sz(t);
	while (i && j) {
		if (s[i - 1] == t[j - 1]) {
			ans += s[i - 1];
			--i, --j;
		}
		else if (dp[i][j - 1] >= dp[i - 1][j])
			--j;
		else --i;
	}
	reverse(all(ans));
	cout << ans;
}

int main() {
	faster;
	//file();
	ll test = 1;
	//cin >> test;
	while(test--)
		solve();
	return 0;
}

//  グエ・cチャン・ハ・アン <3