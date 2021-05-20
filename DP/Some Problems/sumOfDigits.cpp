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

// problem link - https://www.spoj.com/problems/CPCRC1C/

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
#define line cout<<endl;
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
#define setp(a,b) cout<<fixed<<setprecision(a)<<b<<endl;
#define co(x) cout<<x<<nl
#define coo(x) cout<<x<<" ";
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define mem(a,b) memset(a,b,sizeof(a))
#define ff first
#define ss second
#define ll_limit 1000000000000000000
#define ui unsigned  
#define sortn(v) v.begin(),v.end()
#define sortr(v) v.rbegin(),v.rend()
#define initialize unsigned int
#define loop(i,a,b)   for(int i=(a);i<=(b);i++)
#define looprev(i,a,b)  for(int i=(a);i>=(b);i--)
#define log(args...)  { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b) for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;
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


ll power_of_10(ll x){
	ll result = 1;
	loop(i,1,x){
		result *= 10;
	}
	return result;
}


ll sum_of_digit(ll num){
	// i have to make the calculation for the first position separately 
	// because suppose my number is 3872 then i can take 1 - 3000 without problem using the first number as fixed and that will be 10^3
	// because i can take 1, 1000 times (1000 - 1999) then 2, 1000 times then 3, 1000 times so the calculation will be i*10^3 that is i*power_of_10(n-1)
	// but the rest of the 872 i have to calculate separately and that is the rest_of_the_number in the program 
	// and that will         //***************************************♥BISMILLAHIR RAHMANIR RAHIM♥***************************************//
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
#define line cout<<endl;
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
#define setp(a,b) cout<<fixed<<setprecision(a)<<b<<endl;
#define co(x) cout<<x<<nl
#define coo(x) cout<<x<<" ";
#define YES cout<<"YES"<<endl
#define NO cout<<"NO"<<endl
#define mem(a,b) memset(a,b,sizeof(a))
#define ff first
#define ss second
#define ll_limit 1000000000000000000
#define ui unsigned  
#define sortn(v) v.begin(),v.end()
#define sortr(v) v.rbegin(),v.rend()
#define initialize unsigned int
#define loop(i,a,b)   for(int i=(a);i<=(b);i++)
#define looprev(i,a,b)  for(int i=(a);i>=(b);i--)
#define log(args...)  { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b) for(int z=(a);z<=(b);z++) cout<<(arr[z])<<" ";cout<<endl;
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


ll power_of_10(ll x){
    ll result = 1;
    loop(i,1,x){
        result *= 10;
    }
    return result;
}


ll sum_of_digit(ll num){
    // i have to make the calculation for the first position separately 
    // because suppose my number is 3872 then i can take 1 - 3000 without problem using the first number as fixed and that will be 10^3
    // because i can take 1, 1000 times (1000 - 1999) then 2, 1000 times then 3, 1000 times so the calculation will be i*10^3 that is i*power_of_10(n-1)
    // but the rest of the 872 i have to calculate separately and that is the rest_of_the_number in the program 
    // and that will be (rest_of_the_number+1) and i have to multiply with the first digit so it will be first*(rest_of_the_number+1)
    // now the fist position calculation is done 
    // now for the 2nd, 3rd and 4th position if i set the value on a position then rest of the 2 position will be empty and i can set then as 10^2
    // and that is basically pow_of_10(n-2) and as i am setting the value for 1-9 all the numbers so the sum is 45 and i am setting the values for n-1 terms
    // so the total sum will be power_of_10(n-2)*45*(n-1)
    // now also we have to find the same thing for the rest_of_the number also so we have to call it again into the recursive call

    // base case
    if(num/10 == 0) return (num*(num+1))/2;
    string s = to_string(num);
    int n = s.size();
    ll pown_1 = power_of_10(n-1);
    int first = num/pown_1;
    ll result = 0;
    ll sum = power_of_10(n-2)*45*(n-1);
    loop(i,0,first-1){
        result += (i)*pown_1 + sum;
    }
    ll rest_of_the_number = num%pown_1;
    result += first*(rest_of_the_number+1);
    result += sum_of_digit(rest_of_the_number);
    return result;
}


void solve_with_case(int cas){

}


void solve_without_case(){
    ll a,b;
    while(true){
        cin>>a>>b;
        if(a==-1 and b==-1) break;
        ll x = sum_of_digit(b);
        ll y = sum_of_digit(a-1);
        cout<<x-y<<endl;
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
// #endif (rest_of_the_number+1) and i have to multiply with the first digit so it will be first*(rest_of_the_number+1)
	// now the fist position calculation is done 
	// now for the 2nd, 3rd and 4th position if i set the value on a position then rest of the 2 position will be empty and i can set then as 10^2
	// and that is basically pow_of_10(n-2) and as i am setting the value for 1-9 all the numbers so the sum is 45 and i am setting the values for n-1 terms
	// so the total sum will be power_of_10(n-2)*45*(n-1)
	// now also we have to find the same thing for the rest_of_the number also so we have to call it again into the recursive call

	// base case
	printf("asche\n");
	return 0;
}


void solve_with_case(int cas){

}


void solve_without_case(){
	ll a,b;
	while(true){
		cin>>a>>b;
		if(a==-1 and b==-1) break;
		ll x = sum_of_digit(b);
		ll y = sum_of_digit(a-1);
		cout<<x-y<<endl;
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