# include<iostream>
# include<vector>
using namespace std;


// problem: plus sum
// link: https://leetcode.com/problems/plus-sum/
// time complexity: O(n)
// space complexity: O(1)
  vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }

int main() {
   vector<int> digits = {1, 2, 3};
   vector<int> result = plusOne(digits);
   for (int i = 0; i < result.size(); i++) {
       cout << result[i] << " ";
   }

   
    return 0;
}