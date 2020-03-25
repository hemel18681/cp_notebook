//if we use int we will get timelimit because can overflow on i++ subscript
//so we have to use long long


#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn = 1000005;

ll arr[maxn],temp[maxn];

//my i is in the left block
//and my left block is already sorted
//j and mid (as mid is actually mid+1 ) is on the right block
//so if my arr[i]>arr[j] it creates inversion
//now as i creates an inversion for j so that it actually creates
//inversion for all the number from i to mid
//so the number of inversion is mid-i

ll merge(ll low,ll mid,ll high){
    ll inversion=0;
    for(ll i=low,j=mid,k=low;k<=high;k++){
        if(i==mid) temp[k]=arr[j++];
        else if(j==high+1) temp[k]=arr[i++];
        else if(arr[i]<=arr[j]) temp[k]=arr[i++];
        else{
            temp[k]=arr[j++];
            inversion+=mid-i;
        }
    }
    for(ll i=low;i<=high;i++) arr[i]=temp[i];
    return inversion;
}

ll _mergesort(ll low,ll high){
    ll inversion=0;
	if(high>low){
		ll mid=(low+high)/2;
	    inversion+=_mergesort(low,mid);
	    inversion+=_mergesort(mid+1,high);
	    inversion+=merge(low,mid+1,high);
	}
    return inversion;
}

ll mergesort(ll arr_size){
    return _mergesort(0,arr_size-1);
}

int main()
{
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        for(ll i=0;i<n;i++) cin>>arr[i];
        cout<<mergesort(n)<<endl;
    }
}
