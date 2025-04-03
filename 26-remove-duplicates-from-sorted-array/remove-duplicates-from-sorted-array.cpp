class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0; // Handle edge case
        
        int p = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                nums[p] = nums[i];
                p++;
            }
        }
        
        nums[p] = nums[n - 1]; // Add last unique element
        return p + 1; // Return only new length
    }
};
