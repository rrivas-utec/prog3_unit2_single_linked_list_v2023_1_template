//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "single_linked_list.h"
using namespace std;

static void test_1_2() {
    utec::single_linked_list<double> sll = {10.5, 20.3, 30.2, 40.1, 50.4};
    cout << sll;
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", test_1_2);
}