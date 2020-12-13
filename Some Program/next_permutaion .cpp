class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = n-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]>=nums[i+1]) index = i;
            else break;
        }
        if(index == 0){
            reverse(nums.begin(),nums.end());
            return;
        }
        index--;
        int target = index + 1;
        for(int i=target;i<n;i++){
            if(nums[index]<nums[i]) target = i;
        }
        swap(nums[index],nums[target]);
        reverse(nums.begin()+(index+1),nums.end());
        return;
    }
};