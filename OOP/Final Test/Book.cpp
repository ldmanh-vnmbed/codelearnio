#pragma once
#include <iostream>
using namespace std;;
class Book {
    private:
        string nameBook;
        string nameAuthor;
        int numberBook;
    public:
        Book(){

        }
        Book(string nameBook, string nameAuthor, int numberBook){
            this->nameBook = nameBook;
            this->nameAuthor = nameAuthor;
            this->numberBook = numberBook;
        }
        string getNameBook(){
            return nameBook;
        }
        string getNameAuthor(){
            return nameAuthor;
        }
        int getNumberBook(){
            return numberBook;
        }
        void setNameBook(string nameBook){
            this->nameBook = nameBook;
        }
        void setNameAuthor(string nameAuthor){
            this->nameAuthor = nameAuthor;
        }
        void setNumberBook(int numberBook){
            this->numberBook = numberBook;
        }
        void display(){
            cout<<"Name Book: "<<nameBook<<endl;
            cout<<"Name Author: "<<nameAuthor<<endl;
            cout<<"Number Book: "<<numberBook<<endl;
        }
};