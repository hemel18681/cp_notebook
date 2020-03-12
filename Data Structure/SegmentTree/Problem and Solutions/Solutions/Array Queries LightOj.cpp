#include<bits/stdc++.h>
#define mx 100001
using namespace std;
 
 
int arr[mx],n,q;
int tree[mx * 3];
void init(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        //cout<<node<<" "<<tree[node]<<endl;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init(Left, b, mid);
    init(Right, mid + 1, e);
    tree[node] = min(tree[Left] , tree[Right]);
    //cout<<node<<" "<<tree[node]<<endl;
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 9999999;
    if (b >= i && e <= j)
        return tree[node];
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return min(p1 , p2);
}
 
 
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,cas=0;
    scanf("%d",&t);
    while(t--){
        cin>>n>>q;
        for(int i=1;i<=n;i++) cin>>arr[i];
        init(1,1,n);
        int lb,ub;
        printf("Case %d:\n",++cas);
        for(int i=0;i<q;i++){
            scanf("%d%d",&lb,&ub);
            printf("%d\n",query(1,1,n,lb,ub));
        }
    }
}