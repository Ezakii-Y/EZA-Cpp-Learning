# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    string word;
    cout << "Please enter a sentence.";
    string long_w = "";
    while(cin >> word) {
        word.erase(std::remove_if(word.begin(), word.end(), ::ispunct), word.end());
        if (word.size() > long_w.size()) {
            long_w = word;
        }
    }
    cout << long_w << " is longest, the length is " << long_w.size() << endl;
}