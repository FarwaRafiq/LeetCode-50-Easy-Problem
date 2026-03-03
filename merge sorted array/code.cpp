# include<iostream>
# include<vector>
using namespace std;



// problem merge sorted array
// link: https://leetcode.com/problems/merge-sorted-array/
// Time Complexity: O(m + n)
// Space Complexity: O(1)
// Where m and n are the sizes of the two input arrays. 
// The time complexity is O
 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
int main(){
 vector<int>nums1 = {1, 2, 3, 0, 0, 0};
 int m = 3;
   vector<int>nums2 = {2, 5, 6};
    int n = 3;
    merge(nums1, m, nums2, n);
    for (int i = 0; i < nums1.size(); i++) {
        cout << nums1[i] << " ";
    }
        
    
    return 0;
}