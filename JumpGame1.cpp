class Solution {
public:
    

    bool Jump(int i, vector<int>& nums, vector<int>& ans){
        if(i >= nums.size() - 1){
            ans[i] = 1;
            return true;
        }
        if(nums[i] == 0){
            ans[i] = 0;
            return false;
        }
        if(ans[i] != -1){return ans[i];}
        for(int a = 1; a <= nums[i]; a++){
            if(Jump(i + a, nums, ans)){
                ans[i] = 1;
                return true;
            }
        }
        ans[i] = 0;
        return false;
    }
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1){return true;}
        vector<int> ans(nums.size(), -1);
        return Jump(0, nums, ans);
    }
};
