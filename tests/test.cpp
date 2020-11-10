#include "../header/rectangle.hpp"
#include "area_test.hpp"
#include "constructor_test.hpp"
#include "perimeter_test.hpp"
#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
