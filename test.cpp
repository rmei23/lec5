#include<iostream>
#include "functions_to_implement.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace std;

TEST_CASE("Sum") {
    vector<int> v = {1,2,3};
    vector<int> v2 = {4,5,6};
    REQUIRE(Sum(v) == 6);
    REQUIRE(Sum(v2) == 15);
}

TEST_CASE("Product") {
    vector<int> v = {1,2,3};
    vector<int> v2 = {4,5,6};
    REQUIRE(Product(v) == 6);
    REQUIRE(Product(v2) == 120);
}

TEST_CASE("Sign"){
    REQUIRE(Sign(3) == 1);
    REQUIRE(Sign(-3) == -1);
    REQUIRE(Sign(0) == 1);
}