#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, digit;
    cout << "Enter a number: ";
    cin >> n;
    // we also use types of funcation to find sum of digit
    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;

    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}