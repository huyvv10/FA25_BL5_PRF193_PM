#include <iostream>
#include "Employee.h"
#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"
#include "EmployeeManagement.h"
#include <memory>

using namespace std;
void EmployeeManagement::addEmployee(){
	int type=1;
	cout<<"Select 1: Add Fulltime \nSelect 2: Add partime."; cin>>type; cin.ignore();
	Employee* e = nullptr;
	
	if (type==1)
		e = new FullTimeEmployee(0,"",0,0);
	else if (type==2)
		e = new PartTimeEmployee(0,"",0,0,0);
	else
		return;		
	if (e){
		e->input();
		empList.push_back(e);
	}
}

void EmployeeManagement::displayEmployee() const{
	for (Employee* e : empList){
		e->display();
	}
}

EmployeeManagement::~EmployeeManagement() {
	for (Employee* e : empList) {
		delete e;
	}
	empList.clear();
}

void EmployeeManagement::findByName(const string& keyword) const{
	bool flag=false;
	for (Employee* e : empList)
		if (e->getName().find(keyword)!=string::npos){
			e->display();
			flag=true;
		}
	if (!flag) 
		cout<<"Find not found "<<keyword<<" in the list."<<endl;	
}
