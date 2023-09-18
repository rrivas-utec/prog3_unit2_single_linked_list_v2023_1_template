//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "single_linked_list.h"
using namespace std;

static void test_1_5() {
    utec::single_linked_list<int> sll1 = {10, 20, 30, 40, 50};
    auto sll2 = sll1;
    for (auto& item: sll1)
        item *=10;
    cout << sll1 << endl;
    cout << sll2 << endl;
}

TEST_CASE("Question #1.5") {
    execute_test("test_1_5.in", test_1_5);
}