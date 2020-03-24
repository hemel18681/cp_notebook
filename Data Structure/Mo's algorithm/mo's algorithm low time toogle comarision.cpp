#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn = 1000005;

ll arr[maxn],ans[maxn];
int n,q,block_size;
ll mark[maxn];

struct qry{
	int L,R,index;
}block[maxn];

bool cmp(qry q1, qry q2){
	if(q1.L/block_size!=q2.L/block_size) return q1.L/block_size<q2.L/block_size;
	return (q1.R<q2.R)^((q1.L/block_size)%2);
}

ll sum = 0;

//  add ba remove er somoy amar boromaer mark ta already add ache...setake remove diye notun mark add

void add(int number){
	sum=sum-(mark[number]*mark[number]*number);
	mark[number]++;
	sum=sum+(mark[number]*mark[number]*number);
}

void remove(int number){
	sum=sum-(mark[number]*mark[number]*number);
	mark[number]--;
	sum=sum+(mark[number]*mark[number]*number);
}

int main()
{
	scanf("%d%d",&n,&q);
	//toggle compare e sqrt(maxn) porjonto rakha lage block
	block_size=sqrt(maxn);
	for(int i=0;i<n;i++) scanf("%lld",&arr[i]);
	for(int i=0;i<q;i++){
		scanf("%d%d",&block[i].L,&block[i].R);
		block[i].L--; block[i].R--, block[i].index=i;
	}
	sort(block,block+q,cmp);
	int l=0,r=-1;
	for(int i=0;i<q;i++){
		while(l<block[i].L) remove(arr[l]),l++;
		while(l>block[i].L) l--,add(arr[l]);
		while(r<block[i].R) r++,add(arr[r]);
		while(r>block[i].R) remove(arr[r]),r--;
		ans[block[i].index]=sum;
	}
	for(int i=0;i<q;i++) printf("%lld\n",ans[i]);
}
