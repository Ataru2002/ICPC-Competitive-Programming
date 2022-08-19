//Link to Problem: https://www.acmicpc.net/problem/11605
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


int n;
vector<pair<string, int>> lists;
int Ataru() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;
    //std::cout<<std::setprecision(3)<<std::fixed;
    cin >> n;
    for(int i = 0; i < n; i++){
        pair<string, int> in;
        cin >> in.fr >> in.sc;
        lists.pb(in);
    }
    int cnt = 0;
    for(int i = 1; i <= 100; i++){
        int sub = i;
        for(int j = 0; j < lists.size(); j++){
            if(lists[j].fr.compare("ADD") == 0) sub += lists[j].sc;
            if(lists[j].fr.compare("MULTIPLY") == 0) sub *= lists[j].sc;
            if(lists[j].fr.compare("SUBTRACT") == 0){
                if(sub < lists[j].sc){
                    cnt++;
                    break;
                }
                sub -= lists[j].sc;
            }
            if(lists[j].fr.compare("DIVIDE") == 0){
                if(sub % lists[j].sc != 0){
                    cnt++;
                    break;
                }
                sub /= lists[j].sc;
            }
        }
    }
    cout << cnt << "\n";
    return 0;
}
