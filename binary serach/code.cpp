# include<iostream>
# include<vector>
using namespace std;


// problem Binary Search
// level easy
// https://leetcode.com/problems/binary-search/
// Time Complexity: O(log n)
// Space Complexity: O(1)
 int search(vector<int>& nums, int target) {
        int sz = nums.size();
        int left = 0;
        int right = sz - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }

int main(){
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 2;
    cout << search(nums, target) << endl;
    return 0;
}