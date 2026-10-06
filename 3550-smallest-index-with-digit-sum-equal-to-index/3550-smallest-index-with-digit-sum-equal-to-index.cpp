class Solution {
private:
    int getDigitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            if (getDigitSum(nums[i]) == i) {
                return i; // Returns the smallest index immediately upon match
            }
        }
        return -1; // Return -1 if no such index exists
    }
};