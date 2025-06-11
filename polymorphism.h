#pragma once
#ifndef EXPLOITSAMPLE_POLYMORPHISM_H
#define EXPLOITSAMPLE_POLYMORPHISM_H

//
// Created by M.Ghelichkhani on 6/11/2025.
//
#include <stdio.h>

typedef struct {
    void (*speak)(void);
} Animal;

void dogSpeak(){
    puts("Woof");
}

void catSpeak(){
    puts("Meow");
}

void fishSpeak(){
    puts("oOoOo");
}

void speak(){
    Animal dog = {dogSpeak};
    Animal cat = {catSpeak};
    Animal fish = {.speak = fishSpeak};

    Animal dog2;

    dog2.speak =dogSpeak;


    dog.speak();
    cat.speak();
    fish.speak();
    dog2.speak();
}

#endif //EXPLOITSAMPLE_POLYMORPHISM_H
