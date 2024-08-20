#include <stdio.h>
#include <stdlib.h>

#include "my_project.hpp"
#include "foo/foo.h"

int add(int a, int b) {
    return a + b;
}

const char* hello_world() {
    return "Hello, World!";
}

int add_foo(int a, int b) {
    return foo(a, b);
}