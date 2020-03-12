#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
struct trie{
    int stop;
    trie *next[10];
    trie(){
        stop = 0;
        for(int i=0;i<10;i++){
            next[i] = NULL;
        }
    }
}*root;
 
bool insert(string s, trie *cur){
    int l=s.length();
    bool test = 0;
    for(int i=0;i<l;i++){
        int now = s[i]-'0';
        if(cur->next[now]==NULL){
            cur->next[now]=new trie();
        }
        if(cur->stop){
            test=1;
            break;
        }
        cur=cur->next[now];
    }
    cur->stop=1;
    return test;
}
 
void del(trie *cur){
    for(int i=0;i<10;i++){
        if(cur->next[i]){
            del(cur->next[i]);
        }
    }
    delete (cur);
}
 
int main()
{
    int t,cas=0;
    cin>>t;
    while(t--){
        root = new (trie);
        string s;
        int x;
        cin>>x;
        std::vector<string> v;
        bool test = 0;
        for(int i=0;i<x;i++){
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<x;i++){
            test = insert(v[i],root);
            if(test) break;
        }
        cout<<"Case "<<++cas<<": ";
        if(test) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        del(root);
    }
}
