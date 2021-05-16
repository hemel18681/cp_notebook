    //***************************************♥BISMILLAHIR RAHMANIR RAHIM♥***************************************//
/*
                            Asif Uddin Ahmed Hemel || CSE,IUBAT || hemel18103112@gmail.com

                                                                                  .--------------.
                                                                                  | Try First One|
                                                hemel18681                        '--------------'
                                                                                          |     .--------------.
                                                                                          |     |              |
                                                                                          V     V              |
                                                                                        .--------------.       |
        ▀                               ▀      ▀    ▀▀▀▀▀▀▀ ▀       ▀▀▀▀▀▀▀    ▀        |  *ACCEPTED*  |<---.  |
        ▀                               ▀     ▀▀    ▀     ▀ ▀       ▀     ▀   ▀▀        '--------------'    |  |
        ▀                               ▀    ▀ ▀    ▀     ▀ ▀       ▀     ▀  ▀ ▀        (True)|  |(False)   |  |
        ▀                               ▀   ▀  ▀    ▀     ▀ ▀       ▀     ▀ ▀  ▀     .--------'  |          |  |
        ▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀ ▀       ▀▀▀▀▀▀▀ ▀      ▀    ▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀    ▀     |           V          |  |
        ▀     ▀ ▀     ▀ ▀▀▀▀▀▀▀ ▀     ▀ ▀      ▀    ▀     ▀ ▀     ▀ ▀     ▀    ▀     |  .--------------.    |  |
        ▀     ▀ ▀▀▀▀▀▀▀ ▀  ▀  ▀ ▀▀▀▀▀▀▀ ▀      ▀    ▀     ▀ ▀     ▀ ▀     ▀    ▀     |  |   Try Again  |----'  |
        ▀     ▀ ▀       ▀  ▀  ▀ ▀       ▀      ▀    ▀     ▀ ▀     ▀ ▀     ▀    ▀     |  '--------------'       |
        ▀     ▀ ▀▀▀▀▀▀▀ ▀  ▀  ▀ ▀▀▀▀▀▀▀ ▀▀▀ ▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀ ▀▀▀▀▀▀▀  |                         |
                                                                                     |  .--------------.       |
                                                                                     '->| Try Next One |-------'
                                                                                        '--------------'
                                    ♥ ঘরে থাকুন , সুস্থ থাকুন - STAY HOME , STAY SAFE ♥
*/
#include<bits/stdc++.h>
#include<vector>
#include<bitset>
#define start_hemel int main() {
#define end_hemel return 0; }
#define ll long long
#define ull unsigned long long
#define ld long double
#define pi 2*acos(0.0)
#define eb emplace_back
#define endl <<"\n";
#define line cout endl;
#define sp    <<" "<<
#define pb push_back
#define mp make_pair
#define vc vector
#define sc(a) scanf("%d",&a)
#define sfl(a) scanf("%lld",&a)
#define sfd(a) scanf("%lf",&a)
#define pf(a) printf("%d\n",a);
#define pfl(a) printf("%lld\n",a)
#define pfd(a) printf("%lf\n",a)
#define nl endl
#define setp(a,b) cout<<fixed<<setprecision(a)<<b endl;
#define co(x) cout<<x nl
#define coo(x) cout<<x<<" ";
#define YES cout<<"YES" endl
#define NO cout<<"NO" endl
#define mem(a,b) memset(a,b,sizeof(a))
#define ff first
#define ss second
#define ll_limit 1000000000000000000
#define ui unsigned  
#define sortn(v) v.begin(),v.end()
#define sortr(v) v.rbegin(),v.rend()
#define initialize unsigned int
#define prime_fact_value 1e7+5
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
using namespace std;

typedef pair<int, int> ii;
typedef pair<ll, int> li;
typedef pair<int, ll> il;
typedef tuple<int, int, int> tpl;
typedef map<int,int> mii;
typedef map<ll,ll> mll;


const int maxn = 100000007;
const double eps = 1e-6;
const ll Inf = 1LL << 62;
const ll mod = 1000000007;
const ll pnum = 5761460;


int* countFlowers(int k){
    int *dp = new int[100005];
    dp[0] = 1;
    for(int i=1;i<=100000;i++){
        if(i<k) dp[i] = dp[i-1];
        else{
            dp[i] = ((dp[i-1]%mod) + (dp[i-k])%mod)%mod;
        }
    }
    for(int i=1;i<=100000;i++){
        dp[i] = ((dp[i-1]%mod) + (dp[i])%mod)%mod;
    }
    return dp;
}

void solve_with_case(int cas){
    cout<<"Case "<<++cas<<": ";  
}


void solve_without_case(){
    ll t,k; cin>>t>>k;
    int *dp = countFlowers(k);
    while(t--){
        int a,b; cin>>a>>b;
        co((dp[b] - dp[a-1] + mod)%mod)
    }
} 

//before start coding goto windows security and turn off Cloud-delivered protection 
//else you will get 10 second delay after every compile and it will take more time

start_hemel

fastIO

#ifndef ONLINE_JUDGE
    double start_time = clock();
    freopen("kacchi.txt","r",stdin);
    freopen("burger.txt","w",stdout);
#endif


    //int t,cas=0; cin>>t;

    //while(t--){
        solve_without_case();
        //solve_with_case(cas);
        //cas++;
    //}

#ifndef ONLINE_JUDGE
    double end_time = clock();
    cout<<"Time = "<<((end_time-start_time)/CLOCKS_PER_SEC)<<"\n";
#endif

end_hemel


//***♥ALHAMDULILLAH♥***//


