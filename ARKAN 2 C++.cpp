#include<iostream> using namespace std; int main(){ 
int var, var1, var2;
int* varPtr = &var;
int* varPtr1 = &var1;
int* varPtr2 = &var2;
cout<<"\nalamat memori var	: "<< &var;
cout<<"\nisi varPtr		: "<<*varPtr;
cout<<"\nalamat memori var1	: "<< &var1;
cout<<"\nisi varPtr1 \		: "<<*varPtr1;
cout<<"\nalamat memori var2	: "<< &var2;
cout<<"\nisi varPtr2		: "<<*varPtr2;
}

