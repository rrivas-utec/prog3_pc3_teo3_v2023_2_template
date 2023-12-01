//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "count_empty_cells.h"
using namespace std;

static void test_2_1() {
    count_empty_cells<20> counter;
    counter.add(0,0);
    counter.add(19,19);
    std::cout << counter() << std::endl;
}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", test_2_1);
}