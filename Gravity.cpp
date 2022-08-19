//Link to Problem: https://www.acmicpc.net/problem/13986
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

int n, m;
vs grid;
int Ataru() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    //std::cout<<std::setprecision(3)<<std::fixed;
    cin >> n >> m;
    grid.resize(n);
    for(int i = 0; i < n; i++) cin >> grid[i];
    while(true){
        bool change = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                bool cri = true;
                if(grid[i][j] == 'o'){
                    if(i >= n - 1) cri = false;
                    else if(i < n - 1 && grid[i + 1][j] != '.') cri = false;
                    if(cri){
                        swap(grid[i][j], grid[i + 1][j]);
                        change = true;
                    }
                }
            }
        }
        if(!change) break;
    }
    for(int i = 0; i < n; i++){
        cout << grid[i] << "\n";
    }
    return 0;
}
