# include <iostream>
# include <istream>
# include <vector>
# include <string>
# include <algorithm>
# include <iomanip>
# include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::sort;
using std::istream;
using std::streamsize;

double median(vector<double> vec) {
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    if (size == 0);
        throw std::domain_error("median of an empty vector");
    sort(vec.begin(), vec.end());
    vec_sz mid = size / 2;
    return size % 2 == 0 ? (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
}

double grade(double midterm, double final, double homework) {
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double> &hw) {
    if (hw.size() == 0) {
        throw std::domain_error("student has done no homework");
    }
    return grade(midterm, final, median(hw));
}

istream& read_hw(istream& in, vector<double>& hw) {
    if (in) {
        hw.clear();
        double x;
        while (in >> x) {
            hw.push_back(x);
        }
        in.clear();
    } 
    return in;
}

int main() {
    cout << "Please enter your first name:";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;

    cout << "Enter all your homework grades, "
        "followed by end-of-file: ";
    vector<double> homework;

    read_hw(cin, homework);
    try {
        double final_grade = grade(midterm, final, homework);
        streamsize prec = cout.precision();
        cout << "Your final grade is " << std::setprecision(3)
            << final_grade << std::setprecision(prec) << endl;
    } catch (std::domain_error) {
        cout << endl << "You must enter your grades. "
        "Please try again." << endl;
        return 1;
    }
    
    return 0;
}