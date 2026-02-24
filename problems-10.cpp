#include <iostream>
using namespace std;


// problem Decimal to Binary
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Where n is the input number.
// The time complexity is O(log n) because we are dividing the number by 2 in each iteration, which reduces the number of digits in the binary representation. The space complexity is O(1) because we are using a constant amount of space to store the answer and the power variable.
int decimalToBinary(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int lastDigit = n % 2;
        n /= 2;
        ans += (lastDigit * pow);
        pow *= 10;
    }
    return ans;
}


// problem Binary to Decimal
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Where n is the input number.
// The time complexity is O(log n) because we are dividing the number by 10 in each iteration, which reduces the number of digits in the binary representation. The space complexity is O(1) because we are using a constant amount of space to store the answer and the power variable.
int binaryToDecimal(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        n /= 10;
        ans += (lastDigit * pow);
        pow *= 2;
    }
    return ans;
}



// problem num is power of 2
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Where n is the input number.
// The time complexity is O(log n) because we are multiplying the power variable by 2 in each iteration, which reduces the number of iterations needed to reach the input number. The space complexity is O(1) because we are using a constant amount of space to store the power and add variables.
bool powOfTwo(int num)
{
    int pow = 1, add = 0;
    if (num < 1)
    {
        return false;
    }
    while (pow < num)
    {
        add = pow;
        pow *= 2;
    }
    if (pow != num)
    {
        return false;
    }
    return true;
}



// find nth Fibonacci number
// Time Complexity: O(n)
// Space Complexity: O(1)
// Where n is the input number.
// The time complexity is O(n) because we are iterating from 2 to n to calculate the Fibonacci numbers. The space complexity is O(1) because we are using a constant amount of space to store the previous two Fibonacci numbers and the next Fibonacci number.
int fib(int num){
int a =0,  b= 1;
int next;
if(num == 0){
    return a;
}
if(num == 1){
    return b;
}
for(int i = 2; i <= num; i++){
    next = a + b;
    a = b;
    b = next;
}
return next;
}



// calculate Sum of digits of a number
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Where n is the input number.
// The time complexity is O(log n) because we are dividing the number by 10 in
// each iteration, which reduces the number of digits in the input number. The space complexity is O(1) because we are using a constant amount of space to store the sum variable.
int sumOfDigits(int num){
    int sum = 0;
    while(num > 0){
        int lastDigit = num % 10;
        sum += lastDigit;
        num /= 10;
    }
    return sum;
}



// calculate nCr binomial coefficient
// Time Complexity: O(n)
// Space Complexity: O(1)
// find the factorial of a number first and then use it to calculate nCr. The time complexity is O(n) because we are calculating the factorial of n, which takes O(n) time. The space complexity is O(1) because we are using a constant amount of space to store the factorial values and the result of nCr.
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int fact = 1;
    for(int i = 2; i <= n; i++){
        fact *= i;
    }
    return fact;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
int nCr(int n, int r){
    if(r > n){
        return 0;
    }
    if(r == 0 || r == n){
        return 1;
    }
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);
    return numerator / denominator;
}


// problem n is prime number
// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)
// Where n is the input number.
// The time complexity is O(sqrt(n)) because we are iterating from 2 to the square root of n to check for factors. The space complexity is O(1) because we are using a constant amount of space to store the loop variable and the return value.
bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


// problem reverse an integer
// Time Complexity: O(log n)
// Space Complexity: O(1)
// Where n is the input number.
// The time complexity is O(log n) because we are dividing the number by 10 in each iteration, which reduces the number of digits in the input number. The space complexity is O(1) because we are using a constant amount of space to store the reversed number and the last digit.
int reverseInteger(int n){
    int rev = 0;
    while(n > 0){
        int lastDigit = n % 10;
        rev = rev * 10 + lastDigit;
        n /= 10;
    }
    return rev;
}



int main()
{
    int n = 123;
    cout << reverseInteger(n) << endl;

    return 0;
}