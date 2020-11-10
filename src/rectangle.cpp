#include <iostream>
#include "../header/rectangle.hpp"

using namespace std;

Rectangle::Rectangle() {}

Rectangle::Rectangle(int w, int h) {
    width = w;
    height = h;
}

void Rectangle::set_width(int w) {
    width = w;
}

void Rectangle::set_height(int h) {
    height = h;
}

int Rectangle::area() {
    return width *  height;
}

int Rectangle::perimeter() {
    int perimeter = 2 * (width + height);
    return perimeter;
}

int Rectangle::get_width() {
    return width;
}

int Rectangle::get_height() {
    return height;
}