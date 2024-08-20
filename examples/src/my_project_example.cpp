#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include <my_project.hpp>

int main(int argc, char **argv) {
    printf("%d\n", add(1, 2));
    printf("%s\n", hello_world());
    return EXIT_SUCCESS;
}