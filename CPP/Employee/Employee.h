#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
class Employee{
	private:
		int id;
		string name;
		int yob;
	public:
		Employee();
		Employee(int _id, const string& _name, int _yob);
		//Getter
		int getId() const;
		string getName() const;
		int getYob() const;
		
		//setter
		void setId(int _id);
		void setName(const string& _name);
		void setYob(int _yob);
		
		//Abstraction
		virtual double calculateSalary() const = 0;
		virtual void display();
		virtual void input();
		
		//Deconstructor
		virtual ~Employee();
};
#endif