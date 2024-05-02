class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int front = 0, back = nums.size() - 1;
        while(front != back){
            if(nums[front] >= 0 || nums[back] <= 0) break;
            if(abs(nums[front]) > nums[back]){
                front++;
            }
            else if(abs(nums[front]) < nums[back]){
                back--;
            }
            else {
            //else if(abs(nums[front]) == nums[back]){
                return nums[back];
            }
        }
        return -1;
    }
};
