class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        
        int answer1 = 0;
        int answer2 = 0;

        // Count elements of nums1 that exist in nums2
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    answer1++;
                    break;
                }
            }
        }

        // Count elements of nums2 that exist in nums1
        for (int i = 0; i < nums2.size(); i++) {
            for (int j = 0; j < nums1.size(); j++) {
                if (nums2[i] == nums1[j]) {
                    answer2++;
                    break;
                }
            }
        }

        return {answer1, answer2};
    }
};