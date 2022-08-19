//Link to Problem: https://www.acmicpc.net/problem/18155
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

ll n, m;
vector<string> bad;
vector<string> lists;
int Ataru(){
    //freopen("input.txt", "r", stdin) ;
    //freopen("output.txt", "w", stdout) ;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    //std::cout<<std::setprecision(6)<<std::fixed;
    cin >> n >> m;
    bad.resize(n);
    lists.resize(m);
    for(int i = 0; i < n; i++) cin >> bad[i];
    for(int i = 0; i < m; i++) cin >> lists[i];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < lists[i].length(); j++){
            if(lists[i][j] == '0') lists[i][j] = 'O';
            if(lists[i][j] == '1') lists[i][j] = 'L';
            if(lists[i][j] == '2') lists[i][j] = 'Z';
            if(lists[i][j] == '3') lists[i][j] = 'E';
            if(lists[i][j] == '5') lists[i][j] = 'S';
            if(lists[i][j] == '6') lists[i][j] = 'B';
            if(lists[i][j] == '7') lists[i][j] = 'T';
            if(lists[i][j] == '8') lists[i][j] = 'B';
        }
    }
    for(int i = 0; i < m; i++){
        bool ok = true;
        for(int j = 0; j < n; j++){
            if((int)lists[i].length() < (int)bad[j].length()) continue;
            for(int jj = 0; jj <= (int)lists[i].length() - (int)bad[j].length(); jj++){
                bool contain = true;
                for(int jjj = 0; jjj < bad[j].length(); jjj++){
                    //cout << lists[i][jj + jjj] << " " << bad[j][jjj] << " " << contain << "\n";
                    if(lists[i][jj + jjj] != bad[j][jjj]) contain = false;
                }
                if(contain) ok = false;
            }
        }
        if(ok) cout << "VALID\n";
        else cout << "INVALID\n";
    }

    return 0;

}
