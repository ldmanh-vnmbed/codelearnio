#pragma once
#include <iostream>
#include "Book.cpp"
#include <vector>
#include <algorithm>
using namespace std;
class Person {
    private:
        string name;
        int age;
        string add;
        vector<Book> vb;
    public:
        Person(){

        }
        Person(string name, int age, string add, vector<Book> vb){
            this->name=name;
            this->age=age;
            this->add=add;
            this->vb=vb;
        }
        string getName(){
            return name;
        }
        int getAge(){
            return age;
        }
        string getAdd(){
            return add;
        }
        vector<Book> getvb(){
            return vb;
        }
        virtual long moneyPay(){
            return 0;
        }
        static void sortPersonAge(vector<Person*>& vt)
	{
		for (int i = 0; i < vt.size() - 1; i++)
		{
			for (int j = i + 1; j < vt.size(); j++)
			{
				if (vt[i]->getAge() > vt[j]->getAge())
				{
					swap(vt[i], vt[j]);
				}
			}
		}
	}
        static vector<int> getListAge(vector<Person*>vt){
            vector<int> str;
            for (int i = 0; i < vt.size(); i++)
            {
                if (!(find(str.begin(), str.end(), vt[i]->getAge()) != str.end()))
                {
                    str.push_back(vt[i]->getAge());
                }
            }
            return str;
        }
        static vector<Book> getMaxBookBorrowed(vector<Person*>vp, vector<Book> vB){
		vector<int> count(vB.size(), 0);
		for (int i = 0; i < vB.size(); i++)
		{
			for (int j = 0; j < vp.size(); j++)
			{
				vector<Book> b(vp[j]->getvb());
				for (int k = 0; k < b.size(); k++)
				{
					if (vB[i].getNameBook() == b[k].getNameBook())
					{
						count[i]++;
					}
				}
			}
		}
		int max = *max_element(count.begin(), count.end());
		vector<Book> res;
		for (int i = 0; i < vB.size(); i++)
		{
			if (count[i] == max)
			{
				res.push_back(vB[i]);
			}
		}
		return res;
	    }
        void display(){
            cout << "Name: " << name << endl;
		    cout << "Age: " << age << endl;
            cout << "Add: " << add << endl;
            cout << "List Book Borrowed:" << endl;
            for (int i = 0; i < vb.size(); i++)
            {
                vb[i].display();
            }
            cout << "Money Pay: " << moneyPay() << endl;
        }
};