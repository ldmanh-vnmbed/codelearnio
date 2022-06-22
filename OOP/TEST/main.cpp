#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string finals = "";
    int count = 1;
    for (int i = 0 ; i < s.length() ; i++){
        if(s[i]!=s[i+1]){
            finals+=s[i];
            finals+=to_string(count);
            count = 1;
        }
        else count++;
    }
    cout<<finals;
}