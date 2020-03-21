// value jokhon 10^5 er under e thakbe tokhn e mo's algorithm possible
// jodi time limit hoy scanf printf use korle ac hote pare

#include<bits/stdc++.h>
#define ll long long
#define maxn 200005
#define sqmax 450

using namespace std;

struct qry{
    int L,R,index;
};

int n,m;
int arr[maxn],ans[maxn];
vector<qry> block[sqmax];
int block_size,block_count;
unordered_map<int,int> fre;
int num=0;

bool compare(qry q1, qry q2){
    if(q1.R==q2.R) return q1.L<q2.L;
    return q1.R<q2.R;
}

// change add and remove funtion according to necessary
// without this two function everything is same for every problem

void add(int number){
    int &val=fre[number];
    val++;
    if(val-1==number) num--;
    if(val==number) num++;
}

void remove(int number){
    int &val=fre[number];
    val--;
    if(val+1==number) num--;
    if(val==number) num++;
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    block_size=sqrt(n); 
    block_count=n/block_size; //kotogulo block
    for(int i=0;i<m;i++){
        int l,r; cin>>l>>r;
        l--,r--; //0 based indexing
        block[l/block_size].push_back({l,r,i}); // 0 based indexing korle amra jokhon l/block_size kortechi tokhon block gula excat ase jeta 1 besed indexing er somoy majhe majhe jhamela kore  
    }
    int l=0,r=-1; // pre value set of our block from left to right

    for(int i=0;i<block_count;i++){ //prottek block e jawa block er query niye kaj kora
        if(block[i].size()==0) continue;
        sort(block[i].begin(),block[i].end(),compare);

        for(int j=0;j<block[i].size();j++){
            qry q=block[i][j];
            while(l<q.L) remove(arr[l]),l++;  // jodi amar l query er L er theke choto hoy oi porjonto jete hobe r ami ja niye amar l paichilam oi element gula hisab theke baad dite hobe
            while(l>q.L) l--,add(arr[l]); //jodi amar l query er L er theke boro hoy oi porjonto jete hobe ebong ami ekhn jegula pabo oi element gula ke amar hisab e ante hobe
            while(r<q.R) r++,add(arr[r]); //jodi amar r query er R er theke choto hoy oi porjonto jete hobe ebong ami ekhn jegula pabo oi element gula ke amar hisab e ante hobe
            while(r>q.R) remove(arr[r]),r--;  // jodi amar r query er R er theke boro hoy oi porjonto jete hobe r ami ja niye amar r paichilam oi element gula hisab theke baad dite hobe
            ans[q.index]=num;  // query er index e amar bortoman query er ans ta save
        }
    }
    for(int i=0;i<m;i++) cout<<ans[i]<<endl;
}