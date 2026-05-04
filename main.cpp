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
        case 1:
            cout << "Add student selected\n";
            break;
        case 2:
            cout << "List students selected\n";
            break;
        case 3:
            cout << "Search student selected\n";
            break;
        case 4:
            cout << "Delete student selected\n";
            break;
        case 5:
            cout << "Program finished.\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}