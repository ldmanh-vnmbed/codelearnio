#pragma once
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
    void setName(string nameF){
        this->nameF=nameF;
    }
    void setStatus(string status){
        this->status=status;
    }
    void setAdd(string add){
        this->add=add;
    }
    void setP(vector<People> p){
        this->p=p;
    }
    void display(){
        cout<<"NameF: "<<nameF<<endl;
        cout<<"-------------------------------------"<<endl;
        for (int i = 0 ; i < p.size() ; i++){
            p[i].display();
        }
    }
    static vector<Family> getPoorHousehold(vector<Family> fa){
        vector<Family> PoorHouseholdTemp;
        for (int i = 0 ; i < fa.size() ; i++){
            if (fa[i].getStatus() == "Poor"){
                PoorHouseholdTemp.push_back(fa[i]);
            }
        }
        return PoorHouseholdTemp;
    }
    static vector<Family> findFamilySurname(vector<Family> fa, string surname){
        vector<Family> FamilySurnameTemp;
        for (int i = 0 ; i < fa.size() ; i++){
            if(fa[i].getName() == surname){
                FamilySurnameTemp.push_back(fa[i]);
            }
        }
        return FamilySurnameTemp;
    }
};


