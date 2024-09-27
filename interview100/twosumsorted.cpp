class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start = 0;
        int end = numbers.size() - 1;
        while (start < end) {
            int n_target = numbers[start] + numbers[end];
            if (n_target > target)
                end--;
            else if (n_target < target)
                start++;
            else {
                return {start + 1, end + 1};
            }
        }
        return {};
    }
};