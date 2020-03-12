#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int tree[30][2*100005];
int get_tree(int i, int index){
    int res=0;
    while(index>0){
        res=res+tree[i][index];
        index-=index&(-index);
    }
    return res;
}
 
int update(int i,int index,int x, int n){
    while(index<=n){
        tree[i][index]+=x;
        index+=index&(-index);
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);
    string s; cin>>s;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<26;j++){
            if(j==s[i]-97) update(j,i+1,1,s.length());
            else update(j,i+1,0,s.length());
        }
    }
    int q; cin>>q;
    while(q--){
        int cmd; cin>>cmd;
        char c; cin>>c;
        int mid,low=1,up=s.length(),res=0;
        while(low<=up){
            mid=(low+up)/2;
            if(get_tree((c-'a'),mid)>=cmd){
                up=mid-1;
                res=mid;
            }
            else low=mid+1;
        }
        update(c-97,res,-1,s.length());
        m[res-1]=1;
    }
    for(int i=0;i<s.length();i++){
        if(m[i]==0) cout<<s[i];
    }
}