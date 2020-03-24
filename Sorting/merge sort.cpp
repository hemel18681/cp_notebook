#include<bits/stdc++.h>
using namespace std;

const int maxn = 1000005;

int arr[maxn],temp[maxn];

void mergesort(int low, int high){
	if(low==high) return;
	int mid=(low+high)/2;
	mergesort(0,mid);
	mergesort(mid+1,high);
	for(int i=low,j=mid+1,k=low;k<=high;k++){
		if(i==mid+1) temp[k]=arr[j++];
		else if(j==high+1) temp[k]=arr[i++];
		else if(arr[i]<arr[j]) temp[k]=arr[i++];
		else temp[k]=arr[j++];
	}
	for(int i=low;i<=high;i++) arr[i]=temp[i];
	return;
}

int main()
{
	int n; cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	mergesort(0,n-1);
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}