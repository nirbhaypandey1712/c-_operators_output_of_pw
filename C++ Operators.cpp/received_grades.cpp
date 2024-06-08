/*Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many
girls received grades "A" if 17 boys made up 80% of the students that received grades "A".*/

#include<iostream>
using namespace std;
int main() {
    int totalPupils = 45;
    int boys = 17;
    int totalA = (totalPupils * 80) / 100;
    int girls = totalA - boys;
    cout << "The number of girls who received grades 'A' is " << girls << endl;
    return 0;
    }