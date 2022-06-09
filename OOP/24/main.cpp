#include <iostream>
#include "Employee.cpp"

using namespace std;

int main() {
	Employee e(1, "Kien", "Hoang", 1000);
	cout <<"Id: "<<e.getId()<<endl;
	cout << "Name: " << e.getFullName() << endl;
	cout << "Salary: " << e.getSalary() << endl;
	return 0;
}
