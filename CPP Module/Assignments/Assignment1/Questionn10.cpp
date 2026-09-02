//============================================================================
// ame        : Questionn13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright noticeDescription : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Employee {
private:
    int empId;
    string name;
    string department;
    char grade;
    double basicSalary;
    bool isActive;
    static int employeeCount;

public:

    Employee() {
        empId = 1001 + employeeCount;
        employeeCount++;
        isActive = true;
        name = "";
        department = "";
        grade = ' ';
        basicSalary = 0.0;
    }


    void setName(const string& n) {
        if (n.empty()) {
            cout << "ERROR: Name cannot be empty.\n";
        } else {
            name = n;
        }
    }

    void setDepartment(const string& dept) {
        if (dept == "Engineering" || dept == "HR" || dept == "Finance" || dept == "Operations") {
            department = dept;
        } else {
            cout << "ERROR: '" << dept << "' is not a registered department.\n";
        }
    }

    void setGrade(char g) {
        if (g == 'A' || g == 'B' || g == 'C' || g == 'D') {
            grade = g;
        } else {
            cout << "ERROR: Invalid grade '" << g << "'. Accepted values: A, B, C, D.\n";
        }
    }

    void setBasicSalary(double salary) {
        if (salary > 10000 && salary < 500000) {
            basicSalary = salary;
        } else {
            cout << "ERROR: Salary must be between Rs.10,000 and Rs.5,00,000. Value rejected.\n";
        }
    }

    void deactivate() {
        isActive = false;
    }


    int getEmpId() const { return empId; }
    string getName() const { return name; }
    string getDepartment() const { return department; }
    char getGrade() const { return grade; }
    double getBasicSalary() const { return basicSalary; }
    bool getIsActive() const { return isActive; }

    double computeAllowances() const {
        if (grade == 'A') return 0.40 * basicSalary;
        if (grade == 'B') return 0.30 * basicSalary;
        if (grade == 'C') return 0.20 * basicSalary;
        if (grade == 'D') return 0.10 * basicSalary;
        return 0.0;
    }

    double computeGrossSalary() const {
        return basicSalary + computeAllowances();
    }

    double computeTax() const {
        double gross = computeGrossSalary();
        if (gross <= 50000) return 0.0;
        if (gross <= 100000) return 0.10 * (gross - 50000);
        return 5000 + 0.20 * (gross - 100000);
    }

    double computeNetSalary() const {
        return computeGrossSalary() - computeTax();
    }

    void printPayslip() const {
        if (!isActive) return;
        cout << "\n============================================\n";
        cout << "          EMPLOYEE PAYSLIP - AUG 2026\n";
        cout << "============================================\n";
        cout << "Emp ID       : " << empId << "\n";
        cout << "Name         : " << name << "\n";
        cout << "Department   : " << department << "\n";
        cout << "Grade        : " << grade << "\n";
        cout << "Status       : " << (isActive ? "Active" : "Inactive") << "\n";
        cout << "--------------------------------------------\n";
        cout << fixed << setprecision(2);
        cout << "Basic Salary : Rs. " << basicSalary << "\n";
        cout << "Allowances   : Rs. " << computeAllowances() << "\n";
        cout << "Gross Salary : Rs. " << computeGrossSalary() << "\n";
        cout << "--------------------------------------------\n";
        cout << "Tax Deduction: Rs. " << computeTax() << "\n";
        cout << "Net Salary   : Rs. " << computeNetSalary() << "\n";
        cout << "============================================\n";
    }

    static int getEmployeeCount() {
        return employeeCount;
    }

    void acceptDetails() {
        string tempStr;
        char tempChar;
        double tempDouble;

        cout << "\n--- Enter details for New Employee ---\n";

        while (name.empty()) {
            cout << "Enter name: ";
            getline(cin >> ws, tempStr);
            setName(tempStr);
        }

        while (department.empty()) {
            cout << "Enter department: ";
            getline(cin, tempStr);
            setDepartment(tempStr);
        }

        while (grade == ' ') {
            cout << "Enter grade: ";
            cin >> tempChar;
            setGrade(tempChar);
        }

        while (basicSalary == 0.0) {
            cout << "Enter basic salary: ";
            cin >> tempDouble;
            setBasicSalary(tempDouble);
        }
    }
};


int Employee::employeeCount = 0;


struct Layout1 { char c1; int i; char c2; };
struct Layout2 { int i; char c1; char c2; };

int main() {

    Employee e1;
    Employee* e2 = new Employee();
    Employee* e3 = new Employee();

    e1.acceptDetails();
    e2->acceptDetails();
    e3->acceptDetails();



    e1.printPayslip();
    e2->printPayslip();
    e3->printPayslip();


    e3->deactivate();
    if (!e3->getIsActive()) {
        cout << "\n" << e3->getName() << " is no longer active. Payroll skipped.\n";
    }

    cout << "\nTotal Employees : " << Employee::getEmployeeCount() << "\n";

    delete e2;
    delete e3;


    cout << "\n--- Bonus: Struct Padding ---\n";
    cout << "Size of Layout1: " << sizeof(Layout1) << " bytes\n";
    cout << "Size of Layout2: " << sizeof(Layout2) << " bytes\n";



    return 0;
}
