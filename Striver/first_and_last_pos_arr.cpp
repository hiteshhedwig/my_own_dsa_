class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start_idx = 0;
        int end_idx = nums.size()-1;

        int start_occ=-1;
        int end_occ=-1;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == target) {
                start_occ = i;
                break;
            }
        }

        for (int i=nums.size()-1; i>=0; i--) {
            if (nums[i] == target) {
                end_occ = i;
                break;
            }
        }

        return {start_occ, end_occ};

    }
};