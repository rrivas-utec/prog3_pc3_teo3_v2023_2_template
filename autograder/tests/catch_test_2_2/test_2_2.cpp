//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "count_empty_cells.h"
using namespace std;

static void test_2_2() {
  count_empty_cells<15> counter;
  counter.add(0,0);
  counter.add(1,0);
  counter.add(0,3);
  counter.add(4,3);
  counter.add(19,19);
  std::cout << counter() << std::endl;
}

TEST_CASE("Question #2.2") {
    execute_test("test_2_2.in", test_2_2);
}