# include <iostream>
# include <vector>
using namespace std;


// problem Search Insert Position
// level easy
// https://leetcode.com/problems/search-insert-position/
// Time Complexity: O(log n)
// Space Complexity: O(1)
   int searchInsert(vector<int>& nums, int target) {

        int sz = nums.size();
        int low = 0;
        int high = sz - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                low = mid;
            }
            if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
            return low;
        }

int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 7;
    cout << searchInsert(nums, target) << endl;

    return 0;
}