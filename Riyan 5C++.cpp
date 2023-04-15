#include <iostream> 
#include <string> 
using namespace std; 

int main(){
string var = "RIYAN"; 
char* varPtr = &var[0];
char* varPtr1 = &var[4];
for	(int i=0;i<1;i++){
cout << *varPtr; varPtr++;
cout << *varPtr1; varPtr1++;
}
}

