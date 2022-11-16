class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int len = nums.size();
    if (len < 3 || nums[0] > 0) {
        return {};
    }
    unordered_map<int, int> map;
    for (int i = 0; i < len; ++i) {
        map[nums[i]] = i;
    }
    vector<vector<int>> res;
    for (int i = 0; i < len - 2; ++i) {
        if (nums[i] > 0) {
            break;
        }
        for (int j = i + 1; j < len - 1; ++j) {
            int required = -nums[i] - nums[j];
            if (map.count(required) && map.find(required)->second > j) {
                res.push_back({nums[i], nums[j], required});
            }
            j = map.find(nums[j])->second;
        }
        i = map.find(nums[i])->second;
    }
    return res;
}
};