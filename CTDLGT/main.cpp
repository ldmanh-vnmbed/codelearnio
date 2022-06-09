#include <iostream>
#include <string>
#include <math.h>

using namespace std;
void printarray(int a[],int size){
    for (int i = 0; i<size ; i++){
        cout<< a[i];
    }
}
int main(){
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    int a[100];
    for (int i = 0; i < n ; i++){
        cin>> a[i];
    }
    cout<<(sizeof(a)/sizeof(a[0]));    
    return 0;
}