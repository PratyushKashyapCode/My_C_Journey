#include <iostream>
using namespace std;

int main() {
    char X;
    cin >> X;

    if (X >= 'A' && X <= 'Z') {
        char Y = X + 32; // Convert to lowercase
        cout << Y << endl;
    } 
    else if (X >= 'a' && X <= 'z') {
        char Y = X - 32; // Convert to uppercase
        cout << Y << endl;
    } 
    else {
        cout << "INVALID INPUT" << endl;
    }

    return 0;
}
