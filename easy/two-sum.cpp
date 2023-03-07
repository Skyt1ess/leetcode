class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> ans(2);
    map<int, int> _map;
    for (int i = 0; i < nums.size(); i++) {
        if (_map[target - nums[i]]) {
            ans = {_map[target - nums[i]] - 1, i};
            break;
        }
        _map[nums[i]] = i + 1;
    }
    return ans;
  }
};
