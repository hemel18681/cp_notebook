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
    tree[node] = tree[Left] + tree[Right];
    //cout<<node<<" "<<tree[node]<<endl;
}
int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j){
        return tree[node];
        }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return p1+p2;
}
 
 
void update(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        //cout<<node<<" "<<tree[node]<<endl;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update(Left, b, mid, i, newvalue);
    update(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] + tree[Right];
    //cout<<node<<" "<<tree[node]<<endl;
}
 
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t,cas=0;
    scanf("%d",&t);
    while(t--){
        cin>>n>>q;
        for(int i=0;i<n;i++) cin>>arr[i];
        init(1,0,n-1);
        int lb,ub,num,b;
        printf("Case %d:\n",++cas);
        for(int i=0;i<q;i++){
            scanf("%d",&num);
            if(num==1){
                scanf("%d",&b);
                printf("%d\n",arr[b]);
                arr[b]=0;
                update(1,0,n-1,b,0);
            }
            else if(num==2){
                scanf("%d%d",&b,&lb);
                int p=arr[b];
                //cout<<p<<endl;
                p=p+lb;
                arr[b]=p;
                //cout<<arr[b]<<" "<<"build start"<<endl;
                update(1,0,n-1,b,p);
            }
            else{
                scanf("%d%d",&lb,&ub);
                printf("%d\n",query(1,0,n-1,lb,ub));
            }
        }
    }
}