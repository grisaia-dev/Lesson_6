#include "Rhombus.h"

Rhombus::Rhombus() : Rhombus(30, 40, "����") {}

Rhombus::Rhombus(int AC, int BD, std::string _name) : Parallelogram(30, 30, AC, BD, _name) {}