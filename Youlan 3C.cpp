#include <stdio.h> 

int main (){
int var=11, var1=3, var2=5;
int* varPtr = &var;
int* varPtr1 = &var1;
int* varPtr2 = &var2;
printf("\nNilai yang ditunjukan varPtr :%d", *varPtr);
printf("\nNilai yang ditunjukan varPtr1 :%d", *varPtr1);
printf("\nNilai yang ditunjukan varPtr2 :%d", *varPtr2);
}

