#include<bits/stdc++.h>
using namespace std;
 
int get_sum(int bit[],int index){
    int sum=0;
    index+=1;
    while(index>0){
        sum+=bit[index];
        index-=index&(-index);
    }
    return sum;
}
 
void update_bit(int bit[], int n, int index, int value){
    index=index+1;
    while(index<=n){
        bit[index]+=value;
        index+=index&(-index);
    }
}
 
int *construct_bit(int arr[], int n){
    int *bit= new int[n+1];
    for(int i=0;i<=n;i++) bit[i]=0;
    for(int i=0;i<n;i++) update_bit(bit,n,i,arr[i]);
    return bit;
}
 
int main()
{
    int t,cas=0; scanf("%d",&t);
    while(t--){
        int n,q; scanf("%d%d",&n,&q);
        int arr[n];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        int *bit=construct_bit(arr,n);
        printf("Case %d:\n",++cas);
        while(q--){
            int number; scanf("%d",&number);
            if(number==1){
                int index; scanf("%d",&index);
//                cout<<get_sum(bit,index)<<endl;
//                cout<<get_sum(bit,index-1)<<endl;
                int temp=get_sum(bit,index)-get_sum(bit,index-1);
                printf("%d\n",temp);
                update_bit(bit,n,index,-temp);
            }
            else if(number==2){
                int index,money; scanf("%d%d",&index,&money);
                update_bit(bit,n,index,money);
            }
            else{
                int start,end; scanf("%d%d",&start,&end);
                printf("%d\n",get_sum(bit,end)-get_sum(bit,start-1));
            }
        }
    }
}