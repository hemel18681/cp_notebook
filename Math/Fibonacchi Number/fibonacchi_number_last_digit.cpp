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




void solve_with_case(int cas){
    
}
 


void solve_without_case(){
    //fibonacchi number last digit repeat after every 60 digit
    ll x; cin>>x;
    ll arr[65];
    arr[0] = 0;
    arr[1] = 1;
    for(ll i=2;i<65;i++){
        arr[i] = ((arr[i-1]) + (arr[i-2] ));
    } 
    x=x%60;
    cout<<arr[x]%10<<endl;
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