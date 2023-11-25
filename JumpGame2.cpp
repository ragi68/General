
class Solution {
public: 
    
    //from the back, record how min jumps to get to the end. 
    int hop(int i, vector<int>& nums, vector<int>& minHops){
        for(int a  = nums.size() - 2; a >= 0; a--){
            if(nums[a] == 0){continue;}
            if((nums.size() - 1) - a <= nums[a]){
                minHops[a]  = 1; //if not zero and dist from index to last index is less than the val, return 1
            } else{
                int l_min = INT_MAX - 1;
                for(int b = nums[a]; b >= 1; b--){
                    if(nums[a + b] == 0){continue;}
                    l_min = min(l_min, 1 + minHops[a + b]); //setting min between current min and the min at that 
                }
                minHops[a] = l_min;
            }
        }
        return minHops[0];
    }
   
    int jump(vector<int>& nums) {
        if(nums.size() == 1){return 0;}
        vector<int> minHops(nums.size(), 0);
        return hop(0, nums, minHops);
    }
};
