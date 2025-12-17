#ifndef FULL_TIME_EMPLOYEE_H
#define FULL_TIME_EMPLOYEE_H
#include <string>
#include "Employee.h"
using std::string;

class FullTimeEmployee : public Employee {
	private:
		double salary;
	public:
		FullTimeEmployee(int _id, const string& _name, int _yob, double _salary);
		~FullTimeEmployee() override;
		
		double getSalary() const ;
		void setSalary(double sl);
		
		double calculateSalary() const override;
		void input() override;
		void display() override;
};

#endif