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