#ifndef __PERIMETER_TEST_HPP__
#define __PERIMETER_TEST_HPP__

#include <iostream>
#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(PerimeterTest, positivePerim) {
    Rectangle r(5, 2);
    EXPECT_EQ(r->perimeter(), 14);
}

TEST(PerimeterTest, zeroPerim) {
    Rectangle r;
    EXPECT_EQ(r->perimeter(), 0);
}

TEST(PerimeterTest, negPerim) {
    Rectangle r(-5,3);
    EXPECT_EQ(r->perimeter(), -6);
}

TEST(PerimeterTest, twoNegInputs) {
    Rectangle r(-4, -2);
    EXPECT_EQ(r->area(), -12);
}

#endif