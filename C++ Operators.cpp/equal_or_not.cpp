//Q1 - Write a program to check whether two numbers (entered by user) are equal or not.

#include<iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter the number a: ";
    cin >> a;
    cout << "Enter the number b: ";
    cin >> b;
    cout << (a==b)? 0:1;

    return 0;

}