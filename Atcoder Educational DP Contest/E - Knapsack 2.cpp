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
	#ifdef ONLINE_JUDGE
		freopen("DEG.INP", "r", stdin);
		freopen("DEG.OUT", "w", stdout);
	#endif
}

void solve() {
    ll n, W, sum = 0;
    cin >> n >> W;
    vll w(n + 1), v(n + 1);
    foru(i, 1, n) {
        cin >> w[i] >> v[i];
        sum += v[i];
    }
    vll dp(sum + 1);
    foru(i, 1, sum)
        dp[i] = 1e18;
    dp[0] = 0;
    foru(i, 1, n) {
        ford(j, sum, v[i]) {
            if (dp[j - v[i]] + w[i] <= W)
                dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
        }
    }
    ford(i, sum, 0) {
        if (dp[i] != 1e18) {
            cout << i;
            return;
        }
    }
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