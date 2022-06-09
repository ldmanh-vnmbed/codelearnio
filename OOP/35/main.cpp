#include <iostream>
using namespace std;

class Animal {
    public:
        void sound(){
            cout<<"May biet bo may la ai khong"<<endl;
        }
};
class Cat : public Animal {
    public:
        void sound(){
            cout<<"Con meo keu: Hay lam"<<endl;
        }
};
class Dog : public Animal {
    public:
        void sound(){
            cout<<"Con cho keu: Hay cai DMM"<<endl;
        }
};

int main(){
    //Up casting 
    /*Cat conmeo;
    conmeo.sound();

    cout<<&conmeo<<endl;

    Animal* sucvat = &conmeo; //Con trỏ của lớp cha Animal gọi tới lớp con "conmeo"

    sucvat->sound();

    return 0;*/


    //Down Casting
    Animal congichuabiet;

    cout<<&congichuabiet<<endl;

    Dog* ptr2 = (Dog*)&congichuabiet;

    cout<<&ptr2<<endl;
    
    ptr2->sound();
}