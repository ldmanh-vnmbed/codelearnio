#include <iostream>
using namespace std;
class Sinhvien{
	private:
		string name;
		int age;
	public:
		Sinhvien(){
			name = "Le Duc Manh";
			age = 18;
		}
		void getInfor(){
			cout <<name<<" - "<<age<<endl;
		}
};
