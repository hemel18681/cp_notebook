#include<bits/stdc++.h>
#define ull unsigned long long
#define ll long long
#define maxn 2000007
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0),cout.tie(0);
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define eb emplace_back
using namespace std;


//fibonacchi number alwayes follow a repitative nature in terms of mod
//with pisano period we find out the position of repetative number
//next we mod the value of nth febonacchi with that number
//and find the sum upto that number with the mod
//suppose if mod value is 2 then fibonacchi will repeat at 3,6,..
//if mod value is 3 febonacchi will repeat at 8,16...

void solve_with_case(int cas){

}
 
ll pisanoPeriod(ll m){
    ll previous = 0, current = 1;
    for(int i=0;i<m*m;i++){
        ll tmp_previous = previous;
        previous = current;
        current = (tmp_previous + current)%m;
        if(previous == 0 and current == 1) return i+1;
    }
    return 1;
}

ll fib(ll n, ll m){
    ll find = n;
    ll pisano_period = pisanoPeriod(m);
    //cout<<pisano_period<<endl;
    n = n%pisano_period;
    //cout<<n<<endl;
    ll previous = 0, current = 1;
    if(n==0) return 0;
    else if(n==1) return 1;
    else{
        for(int i=1;i<n;i++){
            ll tmp_previous = previous;
            previous = current;
            current = (tmp_previous + current)%m;;
        }
    }
    return current;
}

void solve_without_case(){
    ll n,m; cin>>n>>m;
    cout<<fib(n,m)<<endl;
}

 
 


int main()
{
    fastIO;

#ifndef ONLINE_JUDGE
    double start_time = clock();
    freopen("kacchi.txt","r",stdin);
    freopen("burger.txt","w",stdout);
#endif

    // int t,cas=0; cin>>t;
    // while(t--){
         solve_without_case();
    //     solve_with_case(cas);
    //     cas++;
    // }
 
 
#ifndef ONLINE_JUDGE
    double end_time = clock();
    cout<<"Time = "<<((end_time-start_time)/CLOCKS_PER_SEC)<<"\n";
#endif
   
}