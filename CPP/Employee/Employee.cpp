#include <iostream>
#include "Employee.h"
#include <iomanip>
using namespace std;

Employee::Employee() : id(0), name(""), yob(0) {}

//Employee::Employee(int _id, const string& _name, int _yob){
//	id=_id;
//	name=_name;
//	yob=_yob;
//}

Employee::Employee(int _id, const string& _name, int _yob) : id(_id), name(_name), yob(_yob) {}


int Employee::getId() const {
	return id;
}

string Employee::getName() const {
	return name;
}

int Employee::getYob() const {
	return yob;
}

void Employee::setId(int _id) {
	id=_id;
}

void Employee::setName(const string& _name) {
	name=_name;
}

void Employee::setYob(int _yob) {
	yob=_yob;
}

//void Employee::display() {
//	cout<<id <<" - " <<name<<" - "<<yob;
//}

void Employee::display() {
	cout<<left<<setw(5)<<id
		<<left<<setw(15)<<name
		<<right<<setw(7)<<yob<<endl;	
}

void Employee::input() {
	cout<<"Id: "; cin>>id; cin.ignore();
	cout<<"Name: "; getline(cin,name);
	cout<<"Yob: "; cin>>yob;
}

Employee::~Employee(){}