#include <bits/stdc++.h>
using namespace std;

class Calculator {
public:
    double a, b;
    string op;

    Calculator(double valA, double valB, string operation) {
        a = valA;
        b = valB;
        op = operation;
    }

    void calculate() {
        if (op == "add") {
            cout << "Result: " << a + b << endl;
        } else if (op == "subtract") {
            cout << "Result: " << a - b << endl;
        } else if (op == "multiply") {
            cout << "Result: " << a * b << endl;
        } else if (op == "divide") {
            if (b != 0) {
                cout << "Result: " << a / b << endl;
            } else {
                cout << "Error: Division by zero" << endl;
            }
        } else {
            cout << "Error: Invalid operation" << endl;
        }
    }
};

int main() {
    double input1, input2;
    string operation;

    cout << "Enter a: ";
    cin >> input1;

    cout << "Enter b: ";
    cin >> input2;

    cout << "Enter operation (add, subtract, multiply, divide): ";
    cin >> operation;

    Calculator calc(input1, input2, operation);
    calc.calculate();

    return 0;
}
