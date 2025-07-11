#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        nums.push_back(input);
    }

    map<int, int> divCount;

    for (int d = 1; d <= 9; d++) divCount[d] = 0;

    for (int num : nums) {
        for (int d = 1; d <= 9; d++) {
            if (num % d == 0) divCount[d]++;
        }
    }

    for (int d = 1; d <= 9; d++) {
        cout << d << ": " << divCount[d];
        if (d != 9) cout << ", ";
    }

    cout << endl;
    return 0;
}
