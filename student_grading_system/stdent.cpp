
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<math.h>
using namespace std;

// Function to calculate the average grade
double calculateAverage(const vector<double>& grades) {
    double sum = 0.0;
    for (double grade : grades) {
        sum += grade;
    }
    return sum / grades.size();
}

int main() {
    vector<string> studentNames;
    vector<double> studentGrades;
    string name;
    double grade;

    cout<<"\t\t\t\t\t\t\t\t|||Student Grading System|||"<<endl<<endl;
    while (true) {
        cout << "Enter Student Name (or 'exit' to stop): ";
        cin >> name;

        if (name == "exit") {
            break;
        }

        cout << "Enter Student Grade: ";
        cin >> grade;

        studentNames.push_back(name);
        studentGrades.push_back(grade);
    }

    if (studentNames.empty()) {
        cout << "\nNo student data entered." << endl;
        return 1;
    }

    double averageGrade = round(calculateAverage(studentGrades)*10)/10;
    double highestGrade = *max_element(studentGrades.begin(), studentGrades.end());
    double lowestGrade = *min_element(studentGrades.begin(), studentGrades.end());

    cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\nStudent Grades Summary:" << endl;
    cout << "-----------------------" << endl;
    for (size_t i = 0; i < studentNames.size(); i++) {
        cout << studentNames[i] << ": " << studentGrades[i] << endl;
    }
    cout << "\n------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "\nAverage Grade: " << averageGrade << endl;
    cout << "Highest Grade: " << highestGrade << endl;
    cout << "Lowest Grade: " << lowestGrade << endl;

    return 0;
}
