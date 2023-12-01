//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "minimum_sum_squared_count.h"
using namespace std;

static void test_1_4() {
  auto text = ""s;
  std::cout << minimum_sum_squared_count(text, 20);
}

TEST_CASE("Question #1.4") {
    execute_test("test_1_4.in", test_1_4);
}