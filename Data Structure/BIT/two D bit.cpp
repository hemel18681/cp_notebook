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
    string s; cin>>s;
    for(int i=0;i<s.length();i++){
        for(int j=0;j<26;j++){
            if(j==s[i]-97) update(j,i+1,1,s.length());
            else update(j,i+1,0,s.length());
        }
    }
}