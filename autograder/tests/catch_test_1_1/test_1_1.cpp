//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "minimum_sum_squared_count.h"

static void test_1_1() {
  std::cout << minimum_sum_squared_count("aabaaacc"s, 3) << std::endl;
}

TEST_CASE("Question #1.1") {
    execute_test("test_1_1.in", test_1_1);
}