
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //sort(intervals.begin(),intervals.end()); takes 76ms
        sort( intervals.begin(), intervals.end(), []( const vector<int>& v1, const vector<int>& v2 ){
                                                    return v1[0] < v2[0];   
                                                }); //takes 36ms
        vector<vector<int>>ans;
        int n = intervals.size();
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>intervals[i-1][1]){
                ans.push_back({intervals[i-1][0],intervals[i-1][1]});
            }
            else{
                intervals[i][0]=intervals[i-1][0];
                intervals[i][1]=max(intervals[i-1][1],intervals[i][1]);
            }
        }
        ans.push_back({intervals[n-1][0],intervals[n-1][1]});
        return ans;
    }
};