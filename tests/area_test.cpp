#include "../header/rectangle.hpp"

#include "gtest/gtest.h"
//lab-05---github-actions-cdo032-galva041-lab5

TEST(AreaTest, ZeroArea) {
    Rectangle* zero = new Rectangle();
    int area = zero->area();
    EXPECT_EQ(area, 0);
}

TEST(AreaTest, PosArea) {
    Rectangle square(2,2);
    int area = square.area();
    EXPECT_EQ(area, 4);
}

TEST(AreaTest, NegArea) {
    Rectangle square(2,-2);
    int area = square.area();
    EXPECT_EQ(area, -4);
}