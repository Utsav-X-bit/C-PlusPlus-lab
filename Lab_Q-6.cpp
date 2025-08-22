#include <iostream>
using namespace std ;

class Employee {
    public :
        char name[15];
        int age ;
        char desgination[20];
        float Salary ;
    

        void show(int n){
                cout << n+1 << " Employee\n";
                cout << "Name: "<< name << "\n";
                cout << "Age: " << age << "\n";
                cout << "Designation: " << desgination << "\n";
                cout << "Salary: " << Salary << "\n";
                cout << "\n";
        } 
};

int main(){
    int n ;
    cout << "Enter Number Employees : ";
    cin >> n;
    Employee employees[n];
    for (int i = 0; i<n; i++){
        cout << "Enter Name of Employee " << i+1 <<" : " ;
        cin >> employees[i].name ;
        cout << "Enter Age of Employee " << i+1 <<" : " ;
        cin >> employees[i].age ;
        cout << "Enter Designation of Employee " << i+1 <<" : " ;
        cin >> employees[i].desgination ;
        cout << "Enter Salary of Employee " << i+1 <<" : " ;
        cin >> employees[i].Salary;
        cout << "\n";
    }
    for (int i = 0; i<n; i++){
        employees[i].show(i);
    }
    return 0;


}