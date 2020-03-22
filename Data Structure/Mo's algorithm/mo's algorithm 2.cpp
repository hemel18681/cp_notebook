#include<bits/stdc++.h>
using namespace std;
 
const int maxn = 1000005;
 
int arr[maxn],ans[maxn],n,q,block_size;
unordered_map<int,int> mark;
 
struct qry{
	int L,R,index;
	bool operator<(const qry& other){
		return L/block_size <other.L/block_size or (L/block_size == other.L/block_size and R<other.R);
	}
}block[maxn];
 
 
int distinct_element=0;
 
void add(int number){
	mark[number]++;
	if(mark[number]==1) distinct_element++;
}
 
void remove(int number){
	mark[number]--;
	if(mark[number]==0) distinct_element--;
}
 
int main()
{
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	block_size=sqrt(n);
	cin>>q;
	for(int i=0;i<q;i++){
		cin>>block[i].L>>block[i].R;
		block[i].L--; block[i].R--;
		block[i].index=i;
	}
	sort(block,block+q);
 
	int l=0,r=-1;
 
	for(int i=0;i<q;i++){
		while(l<block[i].L) remove(arr[l]),l++;
		while(l>block[i].L) l--,add(arr[l]);
		while(r<block[i].R) r++,add(arr[r]);
		while(r>block[i].R) remove(arr[r]),r--;
		ans[block[i].index]=distinct_element;
	}
 
	for(int i=0;i<q;i++) cout<<ans[i]<<endl;
} 