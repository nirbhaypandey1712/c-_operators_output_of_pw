/*Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number.*/

#include<iostream>
using namespace std;
int main() {
    int num, first_digit, second_last_digit, sum;
    cout << "Enter a 5 digit number: ";
    cin >> num;
    first_digit = num / 10000;
    second_last_digit = (num / 10) % 10;
    sum = first_digit + second_last_digit;
    cout << "Sum of the first and the second last digit: " << sum << endl;
    return 0;
}