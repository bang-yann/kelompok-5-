#include <stdio.h> 
int main(){
int var[] = {1,2,3,4,5,6,7,8,9,10};
int* varPtr = var;

printf("%d", *varPtr); varPtr++;
printf("%d", *varPtr); varPtr++;
printf("%d", *varPtr); varPtr++;
printf("%d", *varPtr); varPtr++;
printf("%d", *varPtr); varPtr++;
printf("%d", *varPtr); varPtr++;
printf("%d", *varPtr); varPtr++;
printf("%d", *varPtr); varPtr++;
printf("%d", *varPtr); varPtr++;
printf("%d", *varPtr);
}

