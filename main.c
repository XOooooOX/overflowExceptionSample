#include <stdio.h>
#include <stdlib.h>

void  vulnerable_function() {
    char name[16];
    int password = 0;

    printf("enter your name: ");
    gets(name);

    if(password == 1337)
        puts("ok");
    else
        puts("nok");
}

int main() {
    vulnerable_function();
    //system("calc");
    //system("notepad");
    //system("code .");
    return 0;
}
