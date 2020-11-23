
// this problem is for how to change the array value which is declared on the main function but how we can change it in other function without returning.


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

/*
***************prime fact and prime number****************
vc<pair<int,int>> v; vc<bool> isPrime; vc<int> sFactor,primes;
void prime_fact(){
    isPrime.assign(prime_fact_value+1,true); sFactor.assign(prime_fact_value+1,0); isPrime[0]=isPrime[1]=false; primes={};
    for(ll i=2;i<=prime_fact_value;i++){ if(isPrime[i]){ sFactor[i]=i; primes.pb(i); for(ll j=i*i;j<=prime_fact_value;j+=i){ if(isPrime[j]){ isPrime[j]=false; sFactor[j]=i; } } } }
}
*/

class Solution{
public:
    void merge(int arr1[], int arr2[], int n, int m) {
        int j = 0, i = n-1;
        while(j < m && i > -1 && arr2[j] < arr1[i]) swap(arr2[j++],arr1[i--]);
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
    }
};



void solve_with_case(int cas){

}


void solve_without_case(){
    int n,m;
    cin>>n>>m;
    int arr1[n], arr2[m];
    for(int i=0;i<n;i++) cin>>arr1[i];
    for(int i=0;i<m;i++) cin>>arr2[i];
    Solution ob;
    ob.merge(arr1, arr2, n, m);
    for(int i=0;i<n;i++) cout<<arr1[i]<<" ";
    for(int i=0;i<m;i++) cout<<arr2[i]<<" ";
    cout<<"\n";
}


start_hemel
   
 
    //fastIO;
 
 
#ifndef ONLINE_JUDGE
    double start_time = clock();
 
    freopen("kacchi.txt","r",stdin);
 
    freopen("burger.txt","w",stdout);
#endif

    int t,cas=0; cin>>t;
    while(t--){
        solve_without_case();
        //solve_with_case(cas);
        cas++;
    }
    

#ifndef ONLINE_JUDGE
    double end_time = clock();
   
    cout<<"Time = "<<((end_time-start_time)/CLOCKS_PER_SEC)<<"\n";
#endif
   
 
end_hemel
   
 
//***♥ALHAMDULILLAH♥***//