#include <iostream>
using namespace std;

int main() {
    int var = 66;
    int *ptr_var = &var;
    int **ptr_ptr_var = &ptr_var;

    cout << "Nilai var: " << var << endl;
    cout << "Alamat var: " << &var << endl;

    cout << "Nilai ptr_var: " << *ptr_var << endl;
    cout << "Alamat ptr_var: " << &ptr_var << endl;

    cout << "Nilai ptr_ptr_var: " << **ptr_ptr_var << endl;
    cout << "Alamat ptr_ptr_var: " << &ptr_ptr_var << endl;

    return 0;
}

