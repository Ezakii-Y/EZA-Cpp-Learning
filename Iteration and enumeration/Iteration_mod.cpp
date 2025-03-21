# include <iostream>
# include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int main() {
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    const string greeting = "Hello, " + name + "!";
    cout << "Please enter the pad: ";
    int pad;
    cin >> pad;
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    cout << endl;

    // invariance: we have already output r rows up to now
    for (int r = 0; r != rows; ++r) {
        string::size_type c = 0;
        // invariance: we have already output c chars up to now;
        while (c != cols) {
            // whether to output the greeting?
            if (r == pad + 1 && c == pad + 1) {
                cout << greeting;
                c += greeting.size();
            } else if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                cout << "*";
                ++c;
            } else {
                // now put all the pads together
                string padding(cols - 2, ' ');
                cout << padding;
                c += cols - 2;
            }
        }
        cout << endl;
    }
    return 0;
}