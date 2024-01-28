#include <iostream>
using namespace std;
enum etype { laborer, secretary, manager, accountant, executive, researcher };

struct Date {
    int month;
    int day;
    int year;
};

struct Employee {
    int employeeNumber;
    float compensation;
    etype employeeType;
    Date dateOfEmployment;
};

int main() {
    Employee employees[3]; 
    for (int i = 0; i < 3; i++) {
        cout << "Enter data for Employee " << i + 1 << ":\n";
        
        cout << "Employee Number: ";
        cin >> employees[i].employeeNumber;

        cout << "Compensation (in dollars): ";
        cin >> employees[i].compensation;

        cout << "Enter employee type (laborer, secretary, manager, accountant, executive, researcher - first letter only): ";
        char type;
        cin >> type;

        switch (type) {
            case 'l':
                employees[i].employeeType = laborer;
                break;
            case 's':
                employees[i].employeeType = secretary;
                break;
            case 'm':
                employees[i].employeeType = manager;
                break;
            case 'a':
                employees[i].employeeType = accountant;
                break;
            case 'e':
                employees[i].employeeType = executive;
                break;
            case 'r':
                employees[i].employeeType = researcher;
                break;
            default:
                cout << "Invalid employee type.\n";
                return 1;
        }

        cout << "Enter date of first employment (DD/MM/YYYY): ";
        char slash;
        cin >> employees[i].dateOfEmployment.day >> slash
                 >> employees[i].dateOfEmployment.month >> slash
                 >> employees[i].dateOfEmployment.year;
    }

    
    for (int i = 0; i < 3; i++) {
        string typeString;
        switch (employees[i].employeeType) {
            case laborer:
                typeString = "laborer";
                break;
            case secretary:
                typeString = "secretary";
                break;
            case manager:
                typeString = "manager";
                break;
            case accountant:
                typeString = "accountant";
                break;
            case executive:
                typeString = "executive";
                break;
            case researcher:
                typeString = "researcher";
                break;
        }

        cout << "\nEmployee " << i + 1 << " Information:\n";
        cout << "Employee Number: " << employees[i].employeeNumber << "\n";
        cout << "Compensation: $" << employees[i].compensation << "\n";
        cout << "Employee Type: " << typeString << "\n";
        cout << "Date of First Employment: " << employees[i].dateOfEmployment.day << "/"
                  << employees[i].dateOfEmployment.month << "/"
                  << employees[i].dateOfEmployment.year << "\n";
    }

    return 0;
}

