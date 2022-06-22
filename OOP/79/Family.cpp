#include <iostream>
#include <vector>
#include "People.cpp"
using namespace std;
class Family : public People
{
private:
    string nameF;
    string status;
    string add;
    vector<People> p;
public:
    Family(){

    }
    Family(string nameF, string status, string add, vector<People> p){
        this->nameF=nameF;
        this->status=status;
        this->add=add;
        this->p=p;
    }
    string getName(){
        return nameF;
    }
    string getStatus(){
        return status;
    }
    string getAdd(){
        return add;
    }
    vector<People> getP(){
        return p;
    }
    void setName(){

    }
    void setStatus(){

    }
    void setAdd(){

    }
    void display(){
        cout<<"NameF: "<<nameF<<endl;
        cout<<"-------------------------------------"<<endl;
        for (int i = 0 ; i < p.size() ; i++){
            p[i].display();
        }
    }
};


