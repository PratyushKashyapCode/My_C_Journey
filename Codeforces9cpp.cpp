/*#include <iostream>
using namespace std;

int main() {
    double X;
    cin >> X;

    if (X >= 0.00 && X <= 25.00) {
        cout << "Interval [0,25]" << endl;
    }
    else if (X > 25.00 && X <= 50.00) {
        cout << "Interval (25,50]" << endl;
    }
    else if (X > 50.00 && X <= 75.00) {
        cout << "Interval (50,75]" << endl;
    }
    else if (X > 75.00 && X <= 100.00) {
        cout << "Interval (75,100]" << endl;
    }
    else {
        cout << "Out of Intervals" << endl;
    }

    return 0;
}*/


#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input;
    getline(cin, input);  // Read entire line

    stringstream ss(input);
    double X;
    char extra;

    if (!(ss >> X) || (ss >> extra)) {
        cout << "INVALID INPUT" << endl;
    }
    else {
        if (X >= 0.00 && X <= 25.00)
            cout << "Interval [0,25]" << endl;
        else if (X > 25.00 && X <= 50.00)
            cout << "Interval (25,50]" << endl;
        else if (X > 50.00 && X <= 75.00)
            cout << "Interval (50,75]" << endl;
        else if (X > 75.00 && X <= 100.00)
            cout << "Interval (75,100]" << endl;
        else
            cout << "Out of Intervals" << endl;
    }

    return 0;
}
//98'87	INVALID INPUT	' is extra character
//25.0abc	INVALID INPUT	Letters after number