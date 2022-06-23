#include <iostream>
#include "People.cpp"
#include "Family.cpp"
#include "Group.cpp"
using namespace std;

int main(){
    People LeDucManh("Le Duc Manh",27,"Technical","040096007279");
    People LeThiThanhHa("Le Thi Thanh Ha",24,"Tester","1999");
    People LeDucHoat("Le Duc Hoat",64,"Retired","1958");
    People LeThiHaiThanh("Le Thi Hai Thanh",48,"Teacher","1972");
    vector<People> PeopleGiaDinh1;
    PeopleGiaDinh1.push_back(LeDucHoat);
    PeopleGiaDinh1.push_back(LeDucManh);
    PeopleGiaDinh1.push_back(LeThiHaiThanh);
    PeopleGiaDinh1.push_back(LeThiThanhHa);
    Family FamilyGiaDinh1("Gia dinh ong Hoat","Vui ve","57 Phan Kinh", PeopleGiaDinh1);

    People HoDucManh("Ho Duc Manh",27,"Technical","040096007279");
    People HoThiThanhHa("Ho Thi Thanh Ha",24,"Tester","1999");
    People HoDucHoat("Ho Duc Hoat",64,"Retired","1958");
    People HoThiHaiThanh("Ho Thi Hai Thanh",48,"Teacher","1972");
    vector<People> PeopleGiaDinh2;
    PeopleGiaDinh1.push_back(HoDucHoat);
    PeopleGiaDinh1.push_back(HoDucManh);
    PeopleGiaDinh1.push_back(HoThiHaiThanh);
    PeopleGiaDinh1.push_back(HoThiThanhHa);
    Family FamilyGiaDinh2("Gia dinh ho Ho","Poor","57123 Phan Kinh", PeopleGiaDinh2);

    vector<Family> HoGiaDinh;
    HoGiaDinh.push_back(FamilyGiaDinh1);
    HoGiaDinh.push_back(FamilyGiaDinh2);
    
    Group PhuongHungPhuc("Phuong Hung Phuc", HoGiaDinh);
    cout<<PhuongHungPhuc.avgAgeGroup(PhuongHungPhuc);
    return 0;
}