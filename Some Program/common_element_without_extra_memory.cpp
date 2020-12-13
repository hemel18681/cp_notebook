class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            set<int> s;
            for(int i=0,j=0,k=0;i<n1 and j<n2 and k<n3;){
                if(A[i]==B[j] and B[j]==C[k]){
                    s.insert(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else{
                    if(A[i]<B[j]) i++;
                    else if(A[i]<C[k]) i++;
                    else if(B[j]<A[i]) j++;
                    else if(B[j]<C[k]) j++;
                    else k++;
                }
            }
            vector<int> v;
            for(auto i=s.begin();i!=s.end();i++) v.push_back(*i);
            return v;
        }
};