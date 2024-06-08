//Q5 - Write a program to calculate the sum of digits of a 3 digit number.

#include<iostream>
using namespace std;
int main() {
    int num, sum = 0, digit;
    cout << "Enter the 3 digit number: ";
    cin >> num;
    int first_digit = num / 100;
    num = num%100;
    int secend_digit = num / 10;
    int thrid_digit = num % 10;
    sum = first_digit + secend_digit + thrid_digit;
    cout << "The sum of 3 digit is: " << sum << endl;
    return 0;

}