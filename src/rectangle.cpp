
#include "../header/rectangle.hpp"

Rectangle::Rectangle() {
    width = 1;
    height = 1;
}

Rectangle::Rectangle(int w,int h) {
    width = w;
    height = h;
}

void Rectangle::set_width(int w) {
    width = w;
}

void Rectangle::set_height(int h) {
    height = h;
}

int Rectangle::get_width() {
    return height;
}

int Rectangle::get_height() {
    return width;
}

int Rectangle::area() {
    return width / height;
}

int Rectangle::perimeter() {
    return (width) + (2*height);
}

