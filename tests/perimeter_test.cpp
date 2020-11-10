#include "../header/rectangle.hpp"

#include "gtest/gtest.h"
//lab-05---github-actions-cdo032-galva041-lab5

TEST(PerimeterTest, ZeroPerimeter) {
    Rectangle zero;
    int p = zero.perimeter();
    EXPECT_EQ(p, 0);
}

TEST(PerimeterTest, PosPerimeter) {
    Rectangle square(2,2);
    int p = square.perimeter();
    EXPECT_EQ(p, 8);
}

TEST(PerimeterTest, NegPerimeter) {
    Rectangle square(2,-2);
    int p = square.perimeter();
    EXPECT_EQ(p, 0);
}