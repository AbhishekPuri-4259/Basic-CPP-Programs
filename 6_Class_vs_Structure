#include <iostream>
using namespace std;
struct Employee
{
        int id;
        string name, dob;
        string grade;
        int salary;

        void print_public_data()
        {
                cout << "ID: " << id << endl;
                cout << "Name: " << name << endl;
                cout << "DOB: " << dob << endl;
        }

        void print_personal_data()
        {
                cout << "Grade: " << grade << endl;
                cout << "Salary: " << salary << "LPA" << endl;
        }
};

int main()
{
        Employee emp1, emp2, emp3;
        int opt;

        cout << "Enter Employee ID: ";
        cin >> opt;
        switch(opt)
        {
                case 404 : emp1.id = opt;
                           emp1.name = "Elon Musk";
                           emp1.dob = "28th June, 1971";
                           emp1.grade = "20 A";
                           emp1.salary = 20;
                           emp1.print_public_data();
                           emp1.print_personal_data();
                           break;

                case 405 : emp2.id = opt;
                           emp2.name = "Mukesh Ambani";
                           emp2.dob = "19th April, 1957";
                           emp2.grade = "21 B";
                           emp2.salary = 25;
                           emp2.print_public_data();
                           emp2.print_personal_data();
                           break;

                case 406 : emp3.id = opt;
                           emp3.name = "Mark Zuckerberg";
                           emp3.dob = "14th May, 1984";
                           emp3.grade = "18 A";
                           emp3.salary = 15;
                           emp3.print_public_data();
                           emp3.print_personal_data();
                           break;

                default : cout << "Invalid ID";
                          break;
        }

        return 0;
}
