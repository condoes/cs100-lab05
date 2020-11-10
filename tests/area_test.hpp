#ifndef __AREA_TEST_HPP__
#define __AREA_TEST_HPP__

#include <iostream>
#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(AreaTest, positiveArea) {
    Rectangle r(5, 2);
    EXPECT_EQ(r->area(), 10);
}

TEST(AreaTest, zeroArea) {
    Rectangle r;
    EXPECT_EQ(r->area(), 0);
}

TEST(AreaTest, negArea) {
    Rectangle r(-5,3);
    EXPECT_EQ(r->area(), -15);
}

TEST(AreaTest, twoNegInputs) {
    Rectangle r(-4, -2);
    EXPECT_EQ(r->area(), 8);
}

#endif