#include "Rectangle.h"

Rectangle::Rectangle() : Rectangle(10, 20, "�������������") {}

Rectangle::Rectangle(int ac, int bd, std::string _name) : Quadrilateral(ac, bd, ac, bd, 90, 90, 90, 90, _name) {}