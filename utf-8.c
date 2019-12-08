#include<stdio.h>
#include <wchar.h>
#include<locale.h>
int main() {

    wchar_t string[100]; //to store a value greater than 8 bit.

    setlocale(LC_ALL, ""); //to set the locale

    printf ("Enter a string: ");
    scanf("%ls",string);

    printf("String Entered: %ls:\n", string);

    return 0;
}
