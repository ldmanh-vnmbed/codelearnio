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
    Family : public People(/* args */);
    ~Family : public People();
};

Family : public People::Family : public People(/* args */)
{
}

Family : public People::~Family : public People()
{
}
