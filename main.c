#include <stdio.h>
#include <stdlib.h>
#include "polymorphism.h"


int sum(int a, int b){
    return  a+b;
}

void  vulnerable_function() {
    char name[16];
    int password = 0;

    speak();

    int (*func_ptr)(int,int);

    func_ptr = &sum;

    int result = func_ptr(122,2);

    printf("%d\n",result);

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
//msfvenom -p windows/exec CMD=calc.exe -f csharp