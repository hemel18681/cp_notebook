class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        //k is the sum that we have to match
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) m[arr[i]]++;
     
        int twice_count = 0;
     
        // iterate through each element and increment the
        // count (Notice that every pair is counted twice)
        for (int i = 0; i < n; i++) {
            twice_count += m[k - arr[i]];
     
            // if (arr[i], arr[i]) pair satisfies the condition,
            // then we need to ensure that the count is
            // decreased by one such that the (arr[i], arr[i])
            // pair is not considered
            if (k - arr[i] == arr[i])
                twice_count--;
        }
     
        // return the half of twice_count
        return twice_count / 2;
    }
};