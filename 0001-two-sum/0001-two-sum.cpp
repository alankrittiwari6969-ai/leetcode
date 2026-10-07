class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int z =     nums.size();
    for (int i = 0 ; i <z ; i++){
        for (int j = i +1; j<z;j++){
            if (nums[i]+nums[j] == target)
            return{i,j};
        }
    }
     return{};
    }
    
};