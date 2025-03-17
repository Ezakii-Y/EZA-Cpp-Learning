# include <iostream>
# include <vector>
# include <algorithm>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::sort;

int main() {
    vector<int> v = {1, 2, 4, 5, 6, 7, 9, 10};
    typedef vector<int>::size_type vec_sz;
    vec_sz sz = v.size();
    vec_sz sub_sz = sz / 4;
    sort(v.begin(), v.end());
    for (int i = 0; i != 4; ++i) {
        for (int j = 0; j != sz / 4; ++j) {
            cout << v[sz - 1 - j - i * sub_sz];
            if (j < sub_sz - 1) cout << ',';
        }
        cout << ";" << endl;
    }
    return 0;
}