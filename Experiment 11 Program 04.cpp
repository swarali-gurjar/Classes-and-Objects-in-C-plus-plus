//Simple Calculator
#include<iostream>
using namespace std;

class Calculator {
public:
    int num1;
    int num2;
    void enter_numbers() {
        cout << "Enter number 1: ";
        cin >> num1;
        cout << "Enter number 2: ";
        cin >> num2;
    }
    void display_num() {
        cout << "Numbers entered: " << num1 << ", " << num2 << endl;
    }
    int Addition() {
        return num1 + num2;
    }
    int Subtraction() {
        return num1 - num2;
    }
    int Multiplication() {
        return num1 * num2;
    }
    float Division() {
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return num1/num2;
    }
};
int main() {
    Calculator c1;
    c1.enter_numbers();
    c1.display_num();
    int sum = c1.Addition();
    int diff = c1.Subtraction();
    int prod = c1.Multiplication();
    float div = c1.Division();
    cout << "Addition: " << sum << endl;
    cout << "Subtraction: " << diff << endl;
    cout << "Multiplication: " << prod << endl;
    cout << "Division: " << div << endl;
    return 0;
}
