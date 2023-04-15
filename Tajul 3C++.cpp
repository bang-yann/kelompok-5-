#include<iostream>
using namespace std;

int main(){
int var =22, var1=19, var2=4;
int* varPtr = &var;
int* varPtr1 = &var1;
int* varPtr2 = &var2;
cout<< "\nNilai dari variable yang ditunjuk varPtr: " << *varPtr;
cout<< "\nNilai dari variable yang ditunjuk varPtr: " << *varPtr1;
cout<< "\nNilai dari variable yang ditunjuk varPtr: " << *varPtr2;
}
