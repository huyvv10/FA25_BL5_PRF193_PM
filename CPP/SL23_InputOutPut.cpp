#include <iostream>

using namespace std;

bool isPrime(int n){
	if (n<2) return false;
	for (int i=2; i*i<=n; i++)
		if (n%i==0) return false;
	return true;	
} 
int main(){
	int n;
	//Khi khong su dung namespace std
	std::cout<<"Input number: "; std::cin>>n;
	std::cout<<"Inputed number: "<<n<<std::endl;
	int m;
	cout<<"Input m: "; cin>>m;
	printf("m = %d\n", m);
	cout<<"Total of "<<m <<" + "<<n<<" = "<<m+n<<endl;
	if (isPrime(n))
		cout<<n<<" is a prime number."<<endl;
	else
		cout<<n<<" is not a prime number."<<endl;
				
	cin.ignore();	//Clear buffer
	cout<<"Input your name: ";
	string name;
	getline(cin,name);
	cout<<"Your name is: "<<name<<endl;
	return 0;
}
