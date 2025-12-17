#include <iostream>
#include <string>
#include "Employee.h"
#include "FullTimeEmployee.h"

using namespace std;

FullTimeEmployee::FullTimeEmployee(int _id, const string& _name, int _yob, double _salary) : Employee(_id,_name,_yob) {
	salary=_salary;
}

double FullTimeEmployee::getSalary() const {
	return salary;
}

void FullTimeEmployee::setSalary(double _sl){
	if (_sl>0)
		salary=_sl;
}

double FullTimeEmployee::calculateSalary() const{
	return salary*1.25;
}

void FullTimeEmployee::input() {
	Employee::input();
	cout<<"Salary: "; cin>>salary;
}

void FullTimeEmployee::display() {
    Employee::display(); 
    cout << " - Type: Full Time - Salary: " << salary << " - Calculated Salary: " << calculateSalary() << endl;
}

FullTimeEmployee::~FullTimeEmployee() {
    // nothing to do
}
