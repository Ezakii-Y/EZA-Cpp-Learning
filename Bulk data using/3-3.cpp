# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    string sen;
    cout << "Please enter a sentence.";
    int count = 0;
    vector<string> sen_collect;
    vector<int> cou_collect;
    while(cin >> sen) {
        int i = 0;
        bool flag = 1;
        while(i < sen_collect.size()) {
            if (sen_collect[i] == sen) {
                ++cou_collect[i];
                flag = 0;
            }
            ++i;
        }
        if (flag){
            sen_collect.push_back(sen);
            cou_collect.push_back(1);
            ++count;
            flag = !flag;
        }
    }
    for (int i = 0; i < sen_collect.size(); ++i) {
        cout << "The frequency of " << sen_collect[i] << " is " << cou_collect[i] << ";" << endl;
    }
}