#include <bits/stdc++.h>
using namespace std;

int main() {
    int limit;
    cout << "Enter a: ";
    cin >> limit;

    for (int i = 0; i < limit; i++) {
        cout << (2 * i + 1);
        if (i != limit - 1) cout << ", ";
    }

    cout << endl;
    return 0;
}
