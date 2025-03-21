# include <iomanip>
# include <ios>
# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::vector;
using std::sort;

int main() {
    // request input and read the students'name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
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


    // output the result
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
    << 0.2 * midterm + 0.4 * final + 0.4 * median
    << setprecision(prec) << endl;

    return 0;
}