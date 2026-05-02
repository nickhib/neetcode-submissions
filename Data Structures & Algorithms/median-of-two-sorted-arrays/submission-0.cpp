class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        for(int num : nums1)
            answer.push_back(num);
        for(int num : nums2)
            answer.push_back(num);
        sort(answer.begin(),answer.end());
        return ((answer[answer.size()/2] +answer[(answer.size()-1)/2]) /2.0);
        
    }
};
