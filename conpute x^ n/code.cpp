# include<iostream>
# include<vector>
using namespace std;


// problem compute x^n
// level easy
// link: https://leetcode.com/problems/powx-n/
// Time Complexity: O(log n)
// Space Complexity: O(1)
  double myPow(double x, int n) {

        // corner eages
        if (n == 0)
            return 1.0;
        if (x == 1)
            return 1.0;
        if (x == 0)
            return 0.0;
        if (x == -1 && n % 2 == 0)
            return 1.0;
        if (x == -1 && n % 2 != 0)
            return -1.0;

        long binary = n;
        double ans = 1;
        if (binary < 0) {
            x = 1 / x;
            binary = -binary;
        }
        while (binary > 0) {
            if (binary % 2 == 1) {
                ans *= x;
            }
            x *= x ;
            binary /= 2;
        }
        return ans;
    }

int main(){
    double x = 2.00000; 
    int n = 10;
    cout << myPow(x, n) << endl;
    return 0;
}