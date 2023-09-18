//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "single_linked_list.h"
using namespace std;

static void test_1_3() {
    utec::single_linked_list<int> sll = {10, 20, 30, 40, 50};
    for (auto it = begin(sll); it != end(sll); ++it)
         cout << *it;
}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", test_1_3);
}