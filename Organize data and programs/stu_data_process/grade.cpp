# include "Student_info.h"
# include <vector>
# include <stdexcept>
# include "median.h"

using std::domain_error;
using std::vector;

double grade(double midterm, double final, double homework) {
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double> &hw) {
    if (hw.size() == 0) {
        throw std::domain_error("student has done no homework");
    }
    return grade(midterm, final, median(hw));
}

double grade(const Student_info& s) {
    return grade(s.midterm, s.final, s.homework);
}