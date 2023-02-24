#include <iostream>
#include "SourceAndHeadres/Figure.h"
#include "SourceAndHeadres/Triangle.h"
#include "SourceAndHeadres/RightTriangle.h"
#include "SourceAndHeadres/IsoscelesTriangle.h"
#include "SourceAndHeadres/EquilateralTriangle.h"
#include "SourceAndHeadres/Quadrilateral.h"
#include "SourceAndHeadres/Rectangle.h"
#include "SourceAndHeadres/Square.h"
#include "SourceAndHeadres/Parallelogram.h"
#include "SourceAndHeadres/Rhombus.h"

void print_info(Figure* f) {
	if (f->get_var_nums() == 8) {
		std::cout << f->get_name() << ":\n";
		std::cout << "Стороны: " << "a=" << f->get_side_a() << " b=" << f->get_side_b() << " c=" << f->get_side_c() << " d=" << f->get_side_d() << std::endl;
		std::cout << "Углы: " << "A=" << f->get_corner_a() << " B=" << f->get_corner_b() << " C=" << f->get_corner_c() << " D=" << f->get_corner_d() << std::endl;
		std::cout << std::endl;
	} else if (f->get_var_nums() == 6) {
		std::cout << f->get_name() << ":\n";
		std::cout << "Стороны: " << "a=" << f->get_side_a() << " b=" << f->get_side_b() << " c=" << f->get_side_c() << std::endl;
		std::cout << "Углы: " << "A=" << f->get_corner_a() << " B=" << f->get_corner_b() << " C=" << f->get_corner_c() << std::endl;
		std::cout << std::endl;
	}
}

int main(void) {
	setlocale(LC_ALL, "Rus");
	Figure ff;

	Triangle t;
	print_info(&t);

	RightTriangle rt;
	print_info(&rt);
	
	IsoscelesTriangle it;
	print_info(&it);
	
	EquilateralTriangle et;
	print_info(&et);
	
	Quadrilateral q;
	print_info(&q);
	
	Rectangle r;
	print_info(&r);
	
	Square s;
	print_info(&s);
	
	Parallelogram p;
	print_info(&p);
	
	Rhombus rs;
	print_info(&rs);

	return 0;
}