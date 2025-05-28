#include <iostream>
using namespace std;

int main() {
    int N1, N2;
    cin >> N1 >> N2;

    if (N1 % N2 == 0 || N2 % N1 == 0) {
        cout << "Multiples" << endl;
    } else {
        cout << "No Multiples" << endl;
    }

    return 0;
}
