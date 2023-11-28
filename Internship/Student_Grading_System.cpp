#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    // Initialize a map to store student names and grades
    map<string, double> studentGrades;

    // Get the number of students from the user
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Input student names and grades
    for (int i = 0; i < numStudents; ++i) {
        string name;
        double grade;

        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> name;

        cout << "Enter the grade for " << name << ": ";
        cin >> grade;

        studentGrades[name] = grade;
    }

    // Calculate the average grade
    double totalGrade = 0.0;
    for (const auto& entry : studentGrades) {
        totalGrade += entry.second;
    }
    double averageGrade = totalGrade / numStudents;

    // Find the highest and lowest grades
    double highestGrade = numeric_limits<double>::min();
    double lowestGrade = numeric_limits<double>::max();
    for (const auto& entry : studentGrades) {
        highestGrade = max(highestGrade, entry.second);
        lowestGrade = min(lowestGrade, entry.second);
    }

    // Display results
    cout << "\nStudent Grades:\n";
    for (const auto& entry : studentGrades) {
        cout << entry.first << ": " << entry.second << "\n";
    }

    cout << "\nStatistics:\n";
    cout << "Average Grade: " << averageGrade << "\n";
    cout << "Highest Grade: " << highestGrade << "\n";
    cout << "Lowest Grade: " << lowestGrade << "\n";

    return 0;
}
