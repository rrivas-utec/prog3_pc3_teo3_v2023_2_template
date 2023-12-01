//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "minimum_sum_squared_count.h"
using namespace std;

static void test_1_3() {
  auto text = L"Universidad de Ingenieria y tecnologia"s;
  std::cout << minimum_sum_squared_count(text, 8);
}

TEST_CASE("Question #1.3") {
    execute_test("test_1_3.in", test_1_3);
}