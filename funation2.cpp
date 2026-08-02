#include <iostream>
using namespace std;


// find factorial of a number
 int factorial(int n)
 {
    int fact = 1;
    for(int i=1; i<=n; i++){
        // fact = fact * i;
        fact *= i;

    }
    return fact;
}
//here help to cout code  
int main () {
    cout << factorial(4) << endl;
    cout << factorial(3) << endl;





    return 0;
}
