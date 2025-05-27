#include <iostream>
using namespace std;

int main() 
{
    int n, m;
    cin >> n >> m;

    int max_dominoes = (n * m) / 2;  
    cout << max_dominoes << "\n";

    return 0;
}
