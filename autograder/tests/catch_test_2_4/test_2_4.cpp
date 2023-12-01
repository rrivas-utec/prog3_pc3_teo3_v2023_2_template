//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "count_empty_cells.h"
#include <vector>
using namespace std;

static void test_2_4() {
  std::vector<pair<size_t, size_t>> v = {
      {0,  0},
      {1,  0},
      {0,  3},
      {4,  3},
      {11,  2},
      {5,  11},
      {19, 19},
  };
  count_empty_cells<45, std::vector> counter(v);
  std::cout << counter() << std::endl;
}

TEST_CASE("Question #2.4") {
    execute_test("test_2_4.in", test_2_4);
}