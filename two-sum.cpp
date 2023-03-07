class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> _map; 
        _map[nums[0]] = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (_map[target - nums[i]]) {
                return vector<int>{_map[target - nums[i]] - 1, i};
            }
            _map[nums[i]] = i + 1;
        }
        return vector<int>{0, 0};
    }
};
