#ifndef PART_TIME_EMPLOYEE_H
#define PART_TIME_EMPLOYEE_H
#include "Employee.h" 
#include <string> 
class PartTimeEmployee : public Employee{
	private:
		int hours;
		double rate;
	public:
		PartTimeEmployee(int _id, const string& _name, int _yob, int _hours, double _rate) ;
		~PartTimeEmployee();
		
		double calculateSalary() const override;
		void input() override;
		void display() override;
};

#endif