#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numCourses;
    
    cout << "=== CGPA Calculator ===" << endl;
    cout << "How many courses? ";
    cin >> numCourses;
    
    double totalCredits = 0;
    double totalGradePoints = 0;
    
    for (int i = 1; i <= numCourses; i++) {
        double credits;
        char grade;
        
        cout << "\nCourse " << i << " - Credit hours: ";
        cin >> credits;
        
        cout << "Course " << i << " - Grade (A/B/C/D/F): ";
        cin >> grade;
        
        double gradePoints = 0;
        
        if (grade == 'A') {
            gradePoints = 4.0;
        }
        else if (grade == 'B') {
            gradePoints = 3.0;
        }
        else if (grade == 'C') {
            gradePoints = 2.0;
        }
        else if (grade == 'D') {
            gradePoints = 1.0;
        }
        else if (grade == 'F') {
            gradePoints = 0.0;
        }
        else {
            cout << "  Invalid grade! Treating as 0." << endl;
        }
        
        totalGradePoints = totalGradePoints + (gradePoints * credits);
        totalCredits = totalCredits + credits;
    }
    
    double gpa = 0;
    
    if (totalCredits > 0) {
        gpa = totalGradePoints / totalCredits;
    }
    else {
        cout << "\nNo credits entered!" << endl;
        return 0;
    }
    
    cout << "\n===== RESULTS =====" << endl;
    cout << "Total Credits:    " << totalCredits << endl;
    cout << "Total Grade Pts:  " << totalGradePoints << endl;
    cout << fixed << setprecision(2);
    cout << "Your GPA:         " << gpa << endl;
    cout << "===================" << endl;
    
    return 0;
}
