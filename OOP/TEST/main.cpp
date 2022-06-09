#include <iostream>

using namespace std;

int x = 0;

int main(){
    int* ptr = &x;  // Tạo 1 pointer có tên ptr và gán địa chỉ của nó trùng với địa chỉ của biến x
    
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<ptr<<endl;

    int y = *ptr;   // Tạo 1 biến int y có giá trị bằng giá trị của biến ptr
                    // Ở đây ptr có địa chỉ trùng với biến x nên giá trị của ptr là x
    cout<<y<<endl;
    return 0;
}