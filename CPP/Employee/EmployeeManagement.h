#ifndef EMPLOYEE_MANAGEMENT_H
#define EMPLOYEE_MANAGEMENT_H
#include <vector>
#include "Employee.h"


class EmployeeManagement{
	private:
		vector<Employee*> empList;
	public:
		~EmployeeManagement();
		void addEmployee();
		void displayEmployee() const;
		void findByName(const string& keyword) const;
		void editNameById(int _id);
		void sortBySalaryAsc();
		double calAverageSalary() const;
};

#endif