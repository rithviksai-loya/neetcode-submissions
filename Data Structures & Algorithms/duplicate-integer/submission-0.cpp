class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool a = 0;
    for (int i = 1; i < nums.size(); i++ ) {
        for (int j = 0; j < i; j++){
            if (nums[i] == nums[j]) { a = 1;
            return a;
            }
        }
    }
  return a;}
};