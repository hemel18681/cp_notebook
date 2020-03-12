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
 