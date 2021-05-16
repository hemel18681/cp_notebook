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
#define endl "\n";
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
#define co(x) cout<<x<<nl
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
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define log(args...) 	{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b)	for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;
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

void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
	cout << *it << " = " << a << endl;
	err(++it, args...);
}


ll kadane(vc<ll> &temp, int &start, int &end){
	ll sum = 0;
	ll maxSum = INT_MIN;
	end = -1;
	int tempStart = 0;
	int n = temp.size();
	for(int i=0;i<n;i++){
		sum+=temp[i];
		if(sum<0){
			sum = 0;
			tempStart = i+1;
		}
		else if(sum>maxSum){
			maxSum = sum;
			start = tempStart;
			end = i;
		}
	}
	if(end!=-1) return maxSum;
	maxSum = temp[0];
	start = end = 0;
	for(int i=1;i<n;i++){
		if(maxSum<temp[i]){
			maxSum = temp[i];
			start = end = i;
		}
	}
	return maxSum;
}


vc<ll> maxSumRect(vc<vc<ll>> &arr){
	ll result = INT_MIN;
	int n = arr.size();
	int m = arr[0].size();
	vc<ll> temp(n,0);
	int start, end, tlc, tlr, brc, brr;
	for(int leftCol = 0; leftCol<m;leftCol++){
		temp.assign(n,0);
		for(int rightCol = leftCol; rightCol<m; rightCol++){
			for(int i=0;i<n;i++){
				temp[i]+=arr[i][rightCol];
			}
			int sum = kadane(temp, start, end);
			if(sum>result){
				result = sum;
				tlc = leftCol;
				brc = rightCol;
				tlr = start;
				brr = end;
			}
		}
	}
	return {
		result, 
		tlr,
		tlc,
		brr,
		brc
	};
}


void solve_with_case(int cas){

}


void solve_without_case(){
	int n,m; cin>>n>>m;
	vc<vc<ll>> arr(n,vc<ll>(m,0));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	vc<ll> result = maxSumRect(arr);
	for(int i=0;i<result.size();i++){
		coo(result[i])
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



// #ifndef ONLINE_JUDGE
//     double start_time = clock();
//     freopen("kacchi.txt","r",stdin);
//     freopen("burger.txt","w",stdout);
// #endif