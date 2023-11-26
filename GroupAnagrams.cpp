class Solution {
public:

    map<vector<char>, vector<string>> map;
    vector<string> stringList = {"0"};
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        for(int i = 0; i < strs.size(); i++){
            vector<char> c(strs[i].begin(), strs[i].end()); //get char array from out string
            sort(c.begin(), c.end());
            string a(c.begin(), c.end());
            
            if(find(stringList.begin(), stringList.end(), a) != stringList.end()){
                map[c].push_back(strs[i]);
            } else{ 
                stringList.insert(stringList.begin(), a);
                map[c] = {strs[i]};
            }
            
        }  

        vector<vector<string>> arr;
        for(int i = 0; i < stringList.size() - 1; i++){
            vector<char> c(stringList[i].begin(), stringList[i].end()); //get char array from out string
            sort(c.begin(), c.end());

            arr.push_back(map[c]);
        }
       return arr;
    }
};
