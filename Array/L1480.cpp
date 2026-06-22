#include<iostream>
using namespace std;

//Running Sum of 1d Array

/*Example 1:
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].*/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            nums[i]=sum;
        }
        return nums;
    }
};