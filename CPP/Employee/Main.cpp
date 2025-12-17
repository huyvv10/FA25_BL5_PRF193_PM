#include <iostream>
#include "EmployeeManagement.h"

using namespace std;

void menu();
int main() {
	int sel;
	EmployeeManagement em;
	do {
		menu();
		cin>>sel;
		cin.ignore();
		switch (sel) {
			case 1:
				em.addEmployee();
				break;
			case 2:
				em.displayEmployee();
				break;
			case 3:
				break;
			case 0:
				break;
			default:
				cout<<"Invalid selection. "<<endl;	
		}
	} while (sel!=0);

	return 0;
}

void menu() {
	cout<<"\n------- Employee management ------"<<endl;
	cout<<"1.Input full time employee"<<endl;
	cout<<"2.Display employee"<<endl;
	cout<<"0.Quit."<<endl;
	cout<<"Your selection: ";
}

