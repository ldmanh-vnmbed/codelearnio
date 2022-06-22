#pragma once
#include <iostream>
using namespace std;
class People {
    private:
        string name;
        int age;
        string job;
        string id;
    public:
        People(){

        }
        People(string name, int age, string job, string id){
            this->name=name;
            this->age=age;
            this->job=job;
            this->id=id;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        string getJob(){
            return job;
        }
        string getId(){
            return id;
        }
        void setName(string name){
            this->name=name;
        }
        void setAge(int age){
            this->age=age;
        }
        void setJob(string job){
            this->job=job;
        }
        void setId(string id){
            this->id=id;
        }
        virtual void display(){
            cout<<" Name: "<<name<<endl;
            cout<<"  Age: "<<age<<endl;
            cout<<"  Job: "<<job<<endl;
            cout<<"   Id: "<<id<<endl;
            cout<<"-------------------------------------"<<endl;
        }
};