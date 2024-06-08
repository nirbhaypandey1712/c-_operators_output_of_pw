//Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*,%)

#include<iostream>
using namespace std;
int main() {
    cout << "Enter the two value: " << endl; 
    float num1, num2;
    cout << "Enter the value of num1: ";
    cin >> num1;
    cout << "Enter the value of num2: ";
    cin >> num2;
    cout << "The sum of two value is: " << num1 + num2 << endl;
    cout << "The differenc of two value is: " << num1 - num2 << endl;
    cout << "The product of two value is: " << num1 * num2 << endl;
    cout << "The division of two value is: " << num1 / num2 << endl;
    return 0;
}