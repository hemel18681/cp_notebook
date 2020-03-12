#include<bits/stdc++.h>
using namespace std;
int bit[100005];
int get_sum(int index){
    int sum=0;
    index+=1;
    while(index>0){
        sum+=bit[index];
        index-=index&(-index);
    }
    return sum;
}
 
void update_bit( int n, int index, int value){
    index=index+1;
    while(index<=n){
        bit[index]+=value;
        index+=index&(-index);
    }
}
 
 
 
int main()
{
    int t,cas=0; scanf("%d",&t);
    while(t--){
        string s; cin>>s;
        int n=s.length(),q; scanf("%d",&q);
        memset(bit,0,sizeof(bit));
       // int *bit=construct_bit(arr,s.length());
        printf("Case %d:\n",++cas);
        while(q--){
            char c; cin>>c;
            if(c=='I'){
                int fi,td; scanf("%d%d",&fi,&td);
                update_bit(n,fi-1,1);
                update_bit(n,td,-1);
            }
            else{
                int index; scanf("%d",&index);
                int temp=(get_sum(index-1));
                printf("%d\n",(s[index-1]-'0')^(temp%2));
            }
        }
    }
}