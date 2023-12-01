//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "minimum_sum_squared_count.h"
using namespace std;

static void test_1_2() {
  std::wstring text = L"universidad de ingenieria y tecnologia";
  std::cout << minimum_sum_squared_count(text, 4);
}

TEST_CASE("Question #1.2") {
    execute_test("test_1_2.in", test_1_2);
}