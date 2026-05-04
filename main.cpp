#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    string department;
    double grade;

    Student(int id, string name, string department, double grade) {
        this->id = id;
        this->name = name;
        this->department = department;
        this->grade = grade;
    }
};

void showMenu() {
    cout << "\n===== STUDENT MANAGEMENT SYSTEM =====\n";
    cout << "1. Add student\n";
    cout << "2. List students\n";
    cout << "3. Search student\n";
    cout << "4. Delete student\n";
    cout << "5. Exit\n";
    cout << "Choose: ";
}

int main() {
    vector<Student> students;
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1: {
            int id;
            string name, department;
            double grade;

            cout << "Enter student ID: ";
            cin >> id;

            cout << "Enter student name: ";
            cin >> name;

            cout << "Enter department: ";
            cin >> department;

            cout << "Enter grade: ";
            cin >> grade;

            students.push_back(Student(id, name, department, grade));

            cout << "Student added successfully!\n";
            break;
        }

       case 2: {
    if (students.empty()) {
        cout << "No students found.\n";
    } else {
        cout << "\n===== STUDENT LIST =====\n";

        for (int i = 0; i < students.size(); i++) {
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Department: " << students[i].department << endl;
            cout << "Grade: " << students[i].grade << endl;
            cout << "------------------------\n";
        }
    }
    break;
}
    case 3: {
    int searchId;
    bool found = false;

    cout << "Enter student ID to search: ";
    cin >> searchId;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == searchId) {
            cout << "\nStudent found:\n";
            cout << "ID: " << students[i].id << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Department: " << students[i].department << endl;
            cout << "Grade: " << students[i].grade << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }

    break;
}

        case 4: {
    int deleteId;
    bool found = false;

    cout << "Enter student ID to delete: ";
    cin >> deleteId;

    for (int i = 0; i < students.size(); i++) {
        if (students[i].id == deleteId) {
            students.erase(students.begin() + i);
            cout << "Student deleted successfully.\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found.\n";
    }

    break;
}
        case 5:
            cout << "Program finished.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
