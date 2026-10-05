class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_map<int,int> mp;

        for(auto val: nums){
            mp[val]++;
        }
        for(auto vl: mp){
            if(vl.second>1){
                return 1;
            }
        }
        return 0;
        
    }
};