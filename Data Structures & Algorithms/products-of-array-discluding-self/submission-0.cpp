class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        int product = 1;
        int zeroCount = 0;

        for(int i = 0; i < n; i++) {
            if (nums[i] != 0) product *= nums[i];
            else zeroCount++;
        }

        for(int i = 0; i < n; i++) {
            if (zeroCount > 1) {
                result.push_back(0);
            } else if (zeroCount == 1) {
                result.push_back(nums[i] == 0 ? product : 0);
            } else {
                int temp = product / nums[i];
                result.push_back(temp);
            }
        }
        return result;
    }
};