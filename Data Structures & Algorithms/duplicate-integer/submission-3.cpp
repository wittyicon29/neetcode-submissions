class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();

        set<int> s(nums.begin(), nums.end());

        if(nums.size() == s.size()) {
            return false;
        }
        return true;
    }
};