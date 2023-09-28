class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> sort;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] % 2 == 0) {
                sort.insert(sort.begin(), nums[i]);
            }
            else {
                sort.push_back(nums[i]);
            }
        }
        return sort;
    }
};
