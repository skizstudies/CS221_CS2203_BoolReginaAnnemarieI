#include <iostream>
using namespace std; 

int main(){
    int n;

    cout << "Enter number of stairs: ";
    cin >> n;

    if (n <= 2) return n;

    int prev = 1;
    int curr = 1;
    int next;

    for (int i = 2; i <= n; i++) { 
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    cout << "Number of distinct ways: " << curr << endl;

    return 0;
}