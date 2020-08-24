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
#define start_hemel int main() {
#define end_hemel return 0; }
#define ll long long
#define ull unsigned long long
#define ld double
#define pi 2*acos(0.0)
#define endl "\n"
#define pb push_back
#define mp make_pair
#define eb emplace_back
#define vc vector
#define sc(a) scanf("%d",&a)
#define sfl(a) scanf("%lld",&a)
#define sfd(a) scanf("%lf",&a)
#define pf(a) printf("%d\n",a);
#define pfl(a) printf("%lld\n",a)
#define pfd(a) printf("%lf\n",a)
#define ff first
#define ss second
#define ll_limit 1000000000000000000
#define maxn 2000007
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
 
 
const double pii = acos(-1.0);
const double eps = 1e-6;
const ll Inf = 1LL << 62;
const ll mod = 100000007;
 
//int bp(double p)  return ceil(sqrt(2*365*log(1/(1-p))));  
 
//ll mod_all(ll n, ll p){ if(p==-1) p=mod-2; ll ret = 1; while(p){ if(p&1) ret = (ret*1LL*n)%mod; p>>=1; n=(n*1LL*n)%mod; } return ret; }


/****************prime fact and prime number****************
vc<pair<int,int>> v; vc<bool> isPrime; vc<int> sFactor,primes;
void prime_fact(){
    isPrime.assign(prime_fact_value+1,true); sFactor.assign(prime_fact_value+1,0); isPrime[0]=isPrime[1]=false; primes={};
    for(ll i=2;i<=prime_fact_value;i++){ if(isPrime[i]){ sFactor[i]=i; primes.pb(i); for(ll j=i*i;j<=prime_fact_value;j+=i){ if(isPrime[j]){ isPrime[j]=false; sFactor[j]=i; } } } }
}*/

//problem link : https://toph.co/arena?contest=selise-coding-challenge-2020#!/p/5f3ff5e8c669930001b0f930

int x,qe; 
pair<int,int> p[109];
ll mem[109][100009];

ll dp(int pos,ll sum1){
    if(sum1<=0) return -100000000;
    if(pos==x){
        return 0;
    }
    if(mem[pos][sum1]!=0){
        return mem[pos][sum1];
    }
    ll res1 = dp(pos+1,sum1-p[pos].ff)+p[pos].ss;
    ll res2 = dp(pos+1,sum1);
    mem[pos][sum1] = max(res1,res2);
    return mem[pos][sum1];
}
 
void solve_with_case(int cas){
    cout<<"Case "<<++cas<<": ";
    memset(mem,0,sizeof(mem));
    cin>>x>>qe;
    for(int i=0;i<x;i++) cin>>p[i].ff>>p[i].ss;
    cout<<dp(0,qe)<<endl;
}
 


void solve_without_case(){
    
}
 
 
start_hemel
   

 
#ifndef ONLINE_JUDGE
    double start_time = clock();
 
    freopen("kacchi.txt","r",stdin);
 
    freopen("burger.txt","w",stdout);
#endif

    int t,cas=0; cin>>t;
    while(t--){
        //solve_without_case();
        solve_with_case(cas);
        cas++;
    }
 
 
#ifndef ONLINE_JUDGE
    double end_time = clock();
   
    cout<<"Time = "<<((end_time-start_time)/CLOCKS_PER_SEC)<<"\n";
#endif
   
 
end_hemel
   
 
//***♥ALHAMDULILLAH♥***//