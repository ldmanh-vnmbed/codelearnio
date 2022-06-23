#include <iostream>
#include <vector>
#include "Family.cpp"
using namespace std;
class Group : public Family
{
private:
    string nameGr;
    vector<Family> f;
public:
    Group();
    Group(string nameGr,vector<Family> f){
        this->nameGr=nameGr;
        this->f=f;
    }
    string getNameGr(){
        return nameGr;
    }
    vector<Family> getF(){
        return f;
    }
    int getNumberFamily(){
        return f.size();
    }
    static double avgAgeGroup(Group v){
        return v.getAge();
    }
};


