#include <bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cout << "Enter a: ";
    cin >> number;

    int oddLimit = (number % 2 == 0) ? number - 1 : number;

    for (int counter = 0; counter < oddLimit; counter++) {
        cout << (2 * counter + 1);
        if (counter != oddLimit - 1) cout << ", ";
    }

    cout << endl;
    return 0;
}
