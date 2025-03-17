# include <iostream>
# include <vector>
# include <algorithm>
# include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::sort;
using std::string;

int main() {
    vector<int> grades;
    vector<string> names;
    int stu_num = 4;
    for (int i = 0; i < stu_num; ++i) {
        // request input and read the students'name
        cout << "Please enter your first name: ";
        string name;
        cin >> name;
        names.push_back(name);
        cout << "Hello, " << name << "!" << endl;

        // request input and read the mid-term and final exam grades
        cout << "Please enter your mid-term and final exam grades: ";
        double midterm, final;
        cin >> midterm >> final;

        // read the homework grades;
        cout << "Enter all your homework grades, "
            << "followed by end-of-file: ";
        
        double x;
        vector<double> homework;

        // invariance: we have read "count" homework grades untill now
        while (cin>>x) {
            homework.push_back(x);
        }

        // clear the error state of cin and ignore the rest
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        typedef vector<double>::size_type vec_sz;
        vec_sz size = homework.size();

        if (size == 0) {
            cout << endl << "You must enter your grades."
                            "Please try again." << endl;
            return 1;
        }
        sort(homework.begin(), homework.end());
        vec_sz mid = size / 2;
        double median;
        median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];
        
        grades.push_back(0.2 * midterm + 0.4 * final + 0.4 * median);
    }
    return 0;
}