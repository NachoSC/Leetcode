class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //create hashmap, sacrifices memory for speed since reading a hash map is almost O(1)
        unordered_map<int, int> hashmap;
        int complement = 0;
        for(int i = 0; i < nums.size(); i++){
            complement = target - nums[i];
            if(hashmap.count(complement)){
               return {i, hashmap[complement]};
            }
            hashmap[nums[i]] = i;
        }
        return {};
    }
};
