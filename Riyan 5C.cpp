#include <stdio.h>

int main() {
    char nama[] = "RIYAN";
    char *ptrNama = nama;

    printf("Huruf pertama: %c\n", *ptrNama);
    
    while (*ptrNama != '\0') {
        ptrNama++;
    }
    ptrNama--;

    printf("Huruf terakhir: %c\n", *ptrNama);

    return 0;
}

