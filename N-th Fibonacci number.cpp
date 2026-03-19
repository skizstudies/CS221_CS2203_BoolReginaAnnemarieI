#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter n: ";
    cin >> n;

    if (n < 0) { cout << "Invalid input"; return 0; } // handles negative numbers
    
    if (n == 0) { cout << "0-th Fibonacci number is 0"; return 0;} // edge case with 0

    int prev = 0;
    int curr = 1;
    int next = 1;

    for (int i = 2; i < n; i++) { // iterative summation process
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    cout << n << "-th Fibonacci number is " << curr << endl;

    return 0;
}