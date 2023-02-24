#include "Square.h"

Square::Square() : Square(20, " вадрат") {}

Square::Square(int abcd, std::string _name) : Rectangle(abcd, abcd, _name) {}