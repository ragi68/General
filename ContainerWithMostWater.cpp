//Find area between first and last heights
//If area is larger, move the larger value down one
//if area is smaller, move smaller value up one
//continue until area is maxed out and we reach center case.
class Solution { //works only for small cases
public: 
    int maxVal = 0; 


    int maxArea(vector<int>& height) {
        int lPointer = 0, rPointer = height.size() -1;
        while(lPointer < rPointer){
            maxVal = max(maxVal, (rPointer - lPointer) * min(height[rPointer], height[lPointer]));
            if(height[lPointer] < height[rPointer]){lPointer++;} //move right if left is smaller, so that we can find a bigger solution
            else{rPointer--;} //same logic as above but for right. 
        }

        return maxVal;
    }
};
