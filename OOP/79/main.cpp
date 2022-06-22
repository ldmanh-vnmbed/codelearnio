#include <iostream>
#include "People.cpp"
#include "Family.cpp"

using namespace std;

int main(){
    People LeDucManh("Le Duc Manh",27,"Technical","040096007279");
    People LeThiThanhHa("Le Thi Thanh Ha",24,"Tester","1999");
    People LeDucHoat("Le Duc Hoat",64,"Retired","1958");
    People LeThiHaiThanh("Le Thi Hai Thanh",48,"Teacher","1972");
    vector<People> giadinh1;
    giadinh1.push_back(LeDucHoat);
    giadinh1.push_back(LeDucManh);
    giadinh1.push_back(LeThiHaiThanh);
    giadinh1.push_back(LeThiThanhHa);
    Family GiaDinh1("Gia dinh ong Hoat","Vui ve","57 Phan Kinh", giadinh1);
    GiaDinh1.display();
    return 0;
}