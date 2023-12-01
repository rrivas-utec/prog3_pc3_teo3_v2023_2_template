//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "count_empty_cells.h"
using namespace std;

static void test_2_3() {
  count_empty_cells<15> counter{
      {0,  0},
      {1,  0},
      {0,  3},
      {4,  3},
      {11,  2},
      {5,  11},
      {19, 19},
  };
  std::cout << counter() << std::endl;
}

TEST_CASE("Question #2.3") {
    execute_test("test_2_3.in", test_2_3);
}