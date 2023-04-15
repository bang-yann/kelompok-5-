#include <stdio.h>

int main() {
    char nama[] = "YOULAN";
    char *ptrNama = nama;

    printf("Huruf pertama: %c\n", *ptrNama);
    
    while (*ptrNama != '\0') {
        ptrNama++;
    }
    ptrNama--;

    printf("Huruf terakhir: %c\n", *ptrNama);

    return 0;
}

