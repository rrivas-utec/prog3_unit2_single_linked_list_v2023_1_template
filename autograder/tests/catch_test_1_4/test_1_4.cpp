//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "single_linked_list.h"
#include <numeric>
using namespace std;

static void test_1_4() {
    utec::single_linked_list<int> sll = {10, 20, 30, 40, 50};
    auto total = accumulate(begin(sll), end(sll), 0);
    cout << total;
}

TEST_CASE("Question #1.4") {
    execute_test("test_1_4.in", test_1_4);
}