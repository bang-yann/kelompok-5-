#include<iostream>
using namespace std;

void tampilkan(int *nilai) {
    *nilai = (*nilai) * (*nilai);
    cout << *nilai;
}
int main(){
int var = 64; 
tampilkan (&var);

}

