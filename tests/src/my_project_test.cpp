#include <string>
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>
#include <my_project.hpp>

TEST_CASE("Test add function") {
    CHECK(add(1, 2) == 3);
}

TEST_CASE("Test hello_world function") {
    CHECK(std::string(hello_world()) == "Hello, World!");
}

TEST_CASE("Test add_foo function") {
    CHECK(add_foo(1, 2) == 3);
}