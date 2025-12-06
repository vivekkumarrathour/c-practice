/*Armstrong number
Write a program to read the input and check if given number is Armstrong.

If the number is Armstrong Print “Armstrong"
Else, print "Not Armstrong".
Note
What is an Armstrong number?
Armstrong number is 
n
n digit number where the sum of 
n
t
h
n 
th
  power of its each digits is equal to the same 
n
n digit number.

Check the sample input / output given below.

Input Format
The first and only line of input will contain an integer 
N
N which we need to check if they are Armstrong
Output Format
For each test case, output on a new line the following

If the number is Armstrong Print “Armstrong"
Else, print "Not Armstrong".
*/

#include <stdio.h>

long long power(int base, int exp) {
    long long res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            res *= base;
        }
        base *= base;
        exp /= 2;
    }
    return res;
}

int count_digits(int n) {
    if (n == 0) {
        return 1;
    }
    int count = 0;
    long long temp = n; 
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    return count;
}

int main() {
    int N;

    if (scanf("%d", &N) != 1) {
        return 1; 
    }

    int original_N = N; 
    int num_digits; 
    long long sum_of_powers = 0; 
    int remainder;
    
    if (N < 0) {
        printf("Not Armstrong\n");
        return 0;
    } else if (N >= 0 && N <= 9) {
        printf("Armstrong\n");
        return 0;
    }
    
    num_digits = count_digits(N);
    
    int temp = original_N; 
    while (temp != 0) {
        remainder = temp % 10;
        sum_of_powers += power(remainder, num_digits);
        temp /= 10;
    }

    if (sum_of_powers == original_N) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}

