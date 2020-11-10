#ifndef __CONSTRUCTOR_TEST_HPP__
#define __CONSTRUCTOR_TEST_HPP__

#include <iostream>
#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST(ConstructorTest, defaultConstructor) {
    Rectangle r;
    EXPECT_EQ(r->get_width(), 0);
    EXPECT_EQ(r->get_height(), 0);
}

TEST(ConstructorTest, positiveParamaterized) {
    Rectangle r(5, 6)
    EXPECT_EQ(r->get_width(), 5);
    EXPECT_EQ(r->get_height(), 6);
}

TEST(ConstructorTest, negParamaterized) {
    Rectangle r(-5,-3);
    EXPECT_EQ(r->get_width(), -5);
    EXPECT_EQ(r->get_height(), -3);
}


#endif