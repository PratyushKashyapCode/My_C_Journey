#include <iostream>
using namespace std;

int main() 
{
    long long n, m, a;
    cin >> n >> m >> a;

    long long tilesAlongLength = (n + a - 1) / a;
    long long tilesAlongWidth  = (m + a - 1) / a;

    cout << tilesAlongLength * tilesAlongWidth << endl;

    return 0;
}
