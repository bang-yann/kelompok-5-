#include <stdio.h>
void tampilkan(int* value){ 
*value= (*value)*(*value);
printf("%d", *value);
}

int main(){
int var = 19; 
tampilkan (&var);
}
