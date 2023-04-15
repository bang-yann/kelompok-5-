#include<iostream>
using namespace std;

void tampilkan(int *nilai) {
    *nilai = (*nilai) * (*nilai);
    cout << *nilai;
}
int main(){
int var = 10; 
tampilkan (&var);

}

