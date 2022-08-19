//Link to Problem: https://www.acmicpc.net/problem/10571
/** Hanabi?
**                                .
**                              .'
**                            .'
**                            /`-._'
**                           /   /
**                          /   /
**                         /   /
**                        (`-./
**                         )
**                        '       .
**                              .'
**                            .'
**                            /`-._'
**                           /   /
**                          /   /
**                         /   /
**                        (`-./
**                         )
**                        '
**/
//Kaicho Shirogane Miyuki
//Grieveous lady Shinomiya Kaguya
#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define MOD 1000000007
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define alla(a,n) a, a + n
#define endstring std::string::npos
#define prtarr(n,len) {for(int i=0;i<len;i++) cout<<n[i]<<" "; cout<<"\n";}
#define prtset(n) {for(auto i:n) cout<<i<<" "; cout<<"\n";}
#define prtpair(n) {cout<<n.fr<<" "<<n.sc<<"\n";}
#define judge(a) {if(a) cout<<"YES"<<"\n"; else cout<<"NO"<<"\n";}
#define search(a,n) a.find(n)
#define Ataru main
using namespace std;

typedef long long int ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<ull> vull;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<vi> vvii;
typedef vector<string> vs;
int inquire(int x,int y){
    cout<<"? "<<x<<" "<<y<<endl;
    int a; cin>>a;
    return a;
}
const ll INF= 0x3f3f3f3f;
const ll MAX=1e5+1;
const ll ep = 1e-4;

int cases, n;
vector<pair<double, double>> lists;

bool cmp(pair<double, double> &p1, pair<double, double> &p2){
    if(abs(p1.fr - p2.fr) > ep) return p1.fr < p2.fr;
    else return p1.sc > p2.sc;
}

int Ataru() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    //std::cout<<std::setprecision(3)<<std::fixed;
    cin >> cases;
    while(cases--){
        cin >> n;
        lists.clear();
        for(int i = 0; i < n; i++){
            pair<double, double> cur;
            cin >> cur.fr >> cur.sc;
            lists.pb(cur);
        }
        //sort(all(lists), cmp);
        //for(int i = 0; i < n; i++) cout << lists[i].fr << " " << lists[i].sc << "\n";
        vi dp(n, 0);
        for(int i = 0; i < n; i++){
            if(i == 0) dp[i] = 1;
            else{
                int mx = 1;
                for(int j = i - 1; j >= 0; j--){
                    if(lists[j].sc > lists[i].sc && lists[j].fr < lists[i].fr) mx = max(mx, dp[j] + 1);
                }
                dp[i] = mx;
            }
        }
        //prtarr(dp, (int)dp.size());
        int ans = 0;
        for(int i = 0; i < n; i++) ans = max(ans, dp[i]);
        cout << ans << "\n";
    }
    return 0;
}
