#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle() : EquilateralTriangle(30, "�������������� �����������") {}

EquilateralTriangle::EquilateralTriangle(int abc, std::string _name) : Triangle(abc, abc, abc, 60, 60, 60, _name) {}