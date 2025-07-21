
#include<iostream>
using namespace std;

int main() {
    int age, salary;
    cin >> salary >> age;

    if (!age || salary < 0) {
        cout << "invalid" << endl;
    }
    else if (age < 18) {
        cout << "not valid for loan" << endl;
    }
    else if (age >= 18 && salary < 10000) {
        cout << "salary too low for loan" << endl;
    }
    else {
        cout << "valid for loan" << endl;
    }

    return 0;
}