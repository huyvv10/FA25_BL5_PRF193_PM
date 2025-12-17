#include <iostream>
#include <iomanip>
using namespace std;

class Student{
	//Encapsulation - Dong goi
	private:
		int id;
		string name;
		float grade;
	public:
		Student(){
			id=0;
			name="SV FPT";
			grade=0.0;
		}
				//Default constructor
//		Student(int _id, string _name, float _grade){
		Student(int _id, const string& _name, float _grade){
			id=_id;
			name=_name;
			grade=_grade;
		}
		
		~Student(){}; //Deconstructor
		
		//Getter - Accessors
		int getId() const{
			return id;
		}
		
		string getName() const{
			return name;
		}
		
		float getGrade() const{
			return grade;
		}
		
		//Setter - Mutator
		void setId(int _id) {
			id=_id;
		}
		
		void setName(const string& _name){
			name=_name;
		}
		
		void setGrade(float _grade){
			grade=_grade;
		}
		
		void showStudent(){
			cout<<id <<" | " << name << " | " <<fixed<<setprecision(2) <<grade<<endl;
		}
};

int main(){
	Student sv1;
	sv1.showStudent();
//	sv1.id=2;
	sv1.setId(1);
	sv1.setName("Vu Van Huy");
	sv1.setGrade(5.5);
	sv1.showStudent();
	
	Student* sv2 = new Student(2, "Nguyen Viet Dung", 7);
	sv2->showStudent();
	sv2->setGrade(7.5);
	sv2->showStudent();
	
	delete sv2;
	return 0;
}
