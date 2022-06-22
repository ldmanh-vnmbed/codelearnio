#include "Person.cpp"

class Children : public Person {
    public:
        Children(){

        }
        Children(string name, int age, string add, vector<Book> vb): Person(name,age,add,vb){
            
        }
        long moneyPay(){
            return 0;
        }
        void display(){
            
        }
};