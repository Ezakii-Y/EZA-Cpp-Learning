# include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Enter the 1st number: ";
    int num1, num2;
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;
    if (num1 > num2) {
        cout << "The 1st number is greater" << endl;
    } else if (num1 < num2) {
        cout << "The 2nd number is greater" << endl;
    } else {
        cout << "The two number are the same" << endl;
    }
}