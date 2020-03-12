#include<bits/stdc++.h>
#define ll long long
using namespace std;
int res=1;
 
struct trie{
    int stop;
    trie *next[4];
    int cnt[4];
    trie(){
        stop = 0;
        for(int i=0;i<4;i++){
            next[i] = NULL;
        }
        for(int i=0;i<4;i++) cnt[i]=0;
    }
}*root;
 
bool insert(string s, trie *cur){
    int l=s.length();
    bool test = 0;
    for(int i=0;i<l;i++){
//        int now = s[i]-'A';
//        if(cur->next[now]==NULL){
//            cur->next[now]=new trie();
//        }
//        if(cur->stop){
//            test=1;
//            break;
//        }
        int point;
        if(s[i]=='A') point=0;
        else if(s[i]=='C') point=1;
        if(s[i]=='G') point=2;
        if(s[i]=='T') point=3;
        cur->cnt[point]++;
        if(cur->next[point]==NULL){
            cur->next[point]=new trie();
        }
        res=max(res, cur->cnt[point]*(i+1));
        cur=cur->next[point];
    }
    cur->stop=1;
    return test;
}
 
void del(trie *cur){
    for(int i=0;i<4;i++){
        if(cur->next[i]){
            del(cur->next[i]);
        }
    }
    for(int i=0;i<4;i++) if(cur->cnt[i]) cur->cnt[i]=0;
    delete (cur);
}
template <typename Container>
bool LexCompare(const Container& a, const Container& b) {
    return std::lexicographical_compare(a.begin(), a.end(),b.begin(), b.end());
}
 
template <typename ContainerIterator>
void sort_by_lexicographical_comapre(ContainerIterator beg,ContainerIterator end)
{
    std::sort(beg, end, LexCompare<typename ContainerIterator::value_type>);
}
 
 
int main()
{
    int t,cas=0;
    cin>>t;
    while(t--){
        res=1;
        root = new (trie);
        string s;
        int x;
        cin>>x;
        getchar();
        std::vector<string> v;
        bool test = 0;
        for(int i=0;i<x;i++){
            cin>>s;
            v.push_back(s);
        }
        //sort(v.begin(),v.end(),);
         sort_by_lexicographical_comapre(v.begin(), v.end());
        for(int i=0;i<x;i++){
            test = insert(v[i],root);
            if(test) break;
        }
        cout<<"Case "<<++cas<<": "<<res<<endl;
        del(root);
    }
}