//Link to Problem: https://www.acmicpc.net/problem/15121
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
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define alla(a,n) a, a + n
#define endstring std::string::npos
#define prtarr(n,len) {for(int i=0;i<len;i++) cout<<n[i]<<" "; cout<<"\n";}
#define prtset(n) {for(auto i:n) cout<<i<<" "; cout<<"\n";}
#define prtpair(n) {cout<<n.fr<<" "<<n.sc<<"\n";}
#define judge(a) {if(a) cout<<"YES"<<"\n"; else cout<<"NO"<<"\n";}
#define search(a,n) a.find(n);
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
using namespace std;
int inquire(int x,int y){
    cout<<"? "<<x<<" "<<y<<endl;
    int a; cin>>a;
    return a;
}
const ll INF= 0x3f3f3f3f;
const ll MAX=1e5 + 5;
const ll LOG_MAX = 20;

ll n;

bool pos(int x, int y){
    int l = 1;
    int r = n - 1;
    while(l < r){
        int mid = l + (r - l) / 2;
        int sum = (mid * x) + (mid * y);
        if(sum == n){
            return true;
        }
        if(sum > n) r = mid;
        else l = mid + 1;
    }
    l = 1;
    r = n - 1;
    while(l < r){
        int mid = l + (r - l) / 2;
        int sum = ((mid + 1) * x) + (mid * y);
        if(sum == n){
            return true;
        }
        if(sum > n) r = mid;
        else l = mid + 1;
    }
    return false;
}

int Ataru(){
    //freopen("input.txt", "r", stdin) ;
    //freopen("output.txt", "w", stdout) ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    //std::cout<<std::setprecision(6)<<std::fixed;
    cin >> n;
    vector<pair<int, int>> ans;
    for(int i = 2; i <= n; i++){
        if(pos(i, i - 1)) ans.pb(mp(i, i - 1));
        if(pos(i, i)) ans.pb(mp(i, i));
    }
    cout << n << ":\n";
    for(int i = 0; i < (int)ans.size(); i++){
        cout << ans[i].fr << "," << ans[i].sc << "\n";
    }
    return 0;
}
