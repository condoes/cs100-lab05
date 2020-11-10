#include "../header/rectangle.hpp"

#include "gtest/gtest.h"
//lab-05---github-actions-cdo032-galva041-lab5

TEST(ConstTest, DefaultConstructor) {
    Rectangle zero;
    int h = zero.get_height();
    int w = zero.get_width();
    EXPECT_EQ(h, 0);
    EXPECT_EQ(w, 0);
}

TEST(ConstTest, ParamConstructor) {
    Rectangle square(3,2);
    int h = square.get_height();
    int w = square.get_width();
    EXPECT_EQ(w, 3);
    EXPECT_EQ(h, 2);
}

TEST(ConstTest, ParamNegConstructor) {
    Rectangle Neg(2,-2);
    int h = Neg.get_height();
    int w = Neg.get_width();
    EXPECT_EQ(w, 2);
    EXPECT_EQ(h, -2);
}

TEST(ConstTest, ParamDoubleConstructor) {
    Rectangle Neg(3.2343,4.2343);
    int h = Neg.get_height();
    int w = Neg.get_width();
    EXPECT_EQ(w, 3);
    EXPECT_EQ(h, 4);
}