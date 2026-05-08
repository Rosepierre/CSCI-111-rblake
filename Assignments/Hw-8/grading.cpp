/* Grading Program by Roger Blake*/
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    double test1, test2, test3, test4;
    double average;
    char grade;
};

void computeGrades(vector<Student>& students);
char getLetterGrade(double avg);
void sortStudents(vector<Student>& students);
void printReport(const vector<Student>& students, ostream& out);
void loadFile(vector<Student>& students, const string& filename);
void computeStats(const vector<Student>& students);

void computeGrades(vector<Student>& students) {
    for (auto &s : students) {
        s.average = (s.test1 + s.test2 + s.test3 + s.test4) / 4.0;
        s.grade = getLetterGrade(s.average);
    }
}

char getLetterGrade(double avg) {
    if (avg >= 90) return 'A';
    else if (avg >= 80) return 'B';
    else if (avg >= 70) return 'C';
    else if (avg >= 60) return 'D';
    else return 'F';
}

void sortStudents(vector<Student>& students) {
    sort(students.begin(), students.end(),
         [](const Student& a, const Student& b) {
             return a.average > b.average;
         });
}

void loadFile(vector<Student>& students, const string& filename) {
    ifstream fin(filename);
    if (!fin) {
        cout << "Error opening file.\n";
        return;
    }

    Student s;
    while (fin >> s.firstName >> s.lastName
               >> s.test1 >> s.test2 >> s.test3 >> s.test4) {
        students.push_back(s);
    }

    fin.close();
}

void printReport(const vector<Student>& students, ostream& out) {
    out << left << setw(15) << "First"
        << setw(15) << "Last"
        << setw(10) << "T1"
        << setw(10) << "T2"
        << setw(10) << "T3"
        << setw(10) << "T4"
        << setw(10) << "Avg"
        << setw(10) << "Grade" << endl;

    out << string(80, '-') << endl;

    for (const auto &s : students) {
        out << left << setw(15) << s.firstName
            << setw(15) << s.lastName
            << setw(10) << s.test1
            << setw(10) << s.test2
            << setw(10) << s.test3
            << setw(10) << s.test4
            << setw(10) << fixed << setprecision(2) << s.average
            << setw(10) << s.grade << endl;
    }
}

void computeStats(const vector<Student>& students) {
    if (students.empty()) return;

    double sum = 0;
    double maxAvg = students[0].average;
    double minAvg = students[0].average;

    int A=0,B=0,C=0,D=0,F=0;

    for (auto &s : students) {
        sum += s.average;
        maxAvg = max(maxAvg, s.average);
        minAvg = min(minAvg, s.average);

        switch(s.grade) {
            case 'A': A++; break;
            case 'B': B++; break;
            case 'C': C++; break;
            case 'D': D++; break;
            case 'F': F++; break;
        }
    }

    double avg = sum / students.size();

    cout << "\nCLASS STATISTICS\n";
    cout << "Class Average: " << avg << endl;
    cout << "Max Average: " << maxAvg << endl;
    cout << "Min Average: " << minAvg << endl;

    cout << "\nGrade Distribution:\n";
    cout << "A: " << (A * 100.0 / students.size()) << "%\n";
    cout << "B: " << (B * 100.0 / students.size()) << "%\n";
    cout << "C: " << (C * 100.0 / students.size()) << "%\n";
    cout << "D: " << (D * 100.0 / students.size()) << "%\n";
    cout << "F: " << (F * 100.0 / students.size()) << "%\n";
}

int main() {
    vector<Student> students;
    string inputFile, outputFile;
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Load Data\n";
        cout << "2. Display Report\n";
        cout << "3. Save Report\n";
        cout << "4. Show Statistics\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter input file name: ";
                cin >> inputFile;
                loadFile(students, inputFile);
                computeGrades(students);
                sortStudents(students);
                cout << "LOADED.\n";
                break;

            case 2:
                printReport(students, cout);
                break;

            case 3: {
                cout << "Enter output file name: ";
                cin >> outputFile;
                ofstream fout(outputFile);
                printReport(students, fout);
                fout.close();
                cout << "Report saved.\n";
                break;
            }

            case 4:
                computeStats(students);
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}