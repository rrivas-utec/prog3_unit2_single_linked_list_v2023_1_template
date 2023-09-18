//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "single_linked_list.h"
using namespace std;

static void test_1_1() {
    utec::single_linked_list<int> sll;
    sll.push_front(10);
    sll.push_front(20);
    sll.push_front(30);
    sll.push_front(40);
    sll.push_front(50);
    cout << sll;
}

TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", test_1_1);
}