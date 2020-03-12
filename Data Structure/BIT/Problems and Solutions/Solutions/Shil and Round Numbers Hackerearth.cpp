#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
ll get_sum(ll bit[],ll index){
    ll sum=0;
    while(index>0){
        sum+=bit[index];
        index-=index&(-index);
    }
    return sum;
}
 
void update_bit(ll bit[], ll n, ll index, ll value){
    index=index;
    while(index<=n){
        bit[index]+=value;
        index+=index&(-index);
    }
}
 
ll *construct_bit(ll arr[], ll n){
    ll *bit= new ll[n+1];
    for(int i=0;i<=n;i++) bit[i]=0;
    for(int i=0;i<n;i++) update_bit(bit,n,i+1,arr[i]);
    return bit;
}
 
int main()
{
    ll n,q; scanf("%lld%lld",&n,&q);
    ll arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        if(arr[i]<0){
            arr[i]=0;
        }
        else if(arr[i]>=0 and arr[i]<10){
                arr[i]=1;
        }
        else{
            int first,last=arr[i]%10;
            while(arr[i]>0){
                first=arr[i]%10;
                arr[i]/=10;
            }
            if(first==last){
                arr[i]=1;
            }
            else{
                arr[i]=0;
            }
        }
    } 
    ll *bit=construct_bit(arr,n);
    while(q--){
        ll number; scanf("%lld",&number);
        if(number==1){
            ll index1,index2; scanf("%lld%lld",&index1,&index2);
            //cout<<get_sum(bit,index1-1)<<endl;
            ll temp=get_sum(bit,index2)-get_sum(bit,index1-1);
            printf("%ld\n",temp);
        }
        else if(number==2){
            ll index,money; scanf("%lld%lld",&index,&money);
            if(arr[index-1]==1){
                arr[index-1]=0;
                update_bit(bit,n,index,-1);
            }
            if(money<0){
 
                arr[index-1]=0;
            }
            else if(money>=0 and money<10){
                arr[index-1]=1;
                update_bit(bit,n,index,1);
            }
            else{
                int first,last=money%10;
                while(money>0){
                    first=money%10;
                    money/=10;
                }
                if(first==last){
                    arr[index-1]=1;
                    update_bit(bit,n,index,1);
                }
                else{
                    arr[index-1]=0;
                }
            }
            // for(int i=0;i<n;i++) cout<<arr[i]<<" ";
            // cout<<endl;
        }
    }
}