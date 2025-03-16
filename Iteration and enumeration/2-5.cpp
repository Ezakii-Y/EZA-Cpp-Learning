# include <iostream>
# include <string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
    int size;
    cout << "Enter the size of the square: ";
    cin >> size;
    for (int i = 0; i != size; ++i) {
        string line(size, '*');
        cout << line << endl;
    }
    int length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    for (int i = 0; i != width; ++i) {
        string line(length, '*');
        cout << line << endl;
    }
    int height;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    int base = 0;
    for (int i = 0; i < height; ++i) {
        string line(++base, '*');
        cout << line << endl;
    }
}