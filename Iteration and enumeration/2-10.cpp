# include <iostream>

int main() {
    int k = 0;
    // invariance: we have output k "*"s up to now
    while (k != 10) {
        using std::cout;
        cout << "*";
        ++k;
    }
    std::cout << std::endl; // here the "std::" must be used
    return 0;
}