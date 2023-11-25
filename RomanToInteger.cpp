class Solution {
public:
    int romanToInt(string s) {
        map<char, int> key = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int sum = 0;
        for(int i = 0; i < s.size(); i++){
           
            if(key[s[i]] < key[s[i+1]]){
                sum = sum - key[s[i]];
            }
            else{
                sum = sum + key[s[i]];
            }
        }
        return sum;
    }
};
