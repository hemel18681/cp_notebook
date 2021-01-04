/*
	Name: Asif Uddin Ahmed Hemel
	Codeforces Handle : hemel18681
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int t; scanf("%d",&t);
	while(t--){
		ll x,y; scanf("%lld%lld",&x,&y);
		ll odd1 = x*x;
		ll even1 = y*y +y;
		ll odd2 = x*x +x;
		ll even2 = y*y;
		ll ans = min(abs(odd1-even1),abs(odd2-even2)); 
		printf("%lld\n",ans);
	}
}