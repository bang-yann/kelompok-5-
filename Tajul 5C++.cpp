##include <iostream> 
#include <string> 
using namespace std; 

int main(){
string var = "TADJUL"; 
char* varPtr = &var[1];
char* varPtr1 = &var[5];
for	(int i=0;i<1;i++){
cout << *varPtr; varPtr++;
cout << *varPtr1; varPtr1++;
}
}

