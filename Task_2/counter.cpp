#include "counter.h"

void Counter::add_count() { this->count++; }
void Counter::sub_count() { this->count--; }

Counter::Counter() { this->count = 0; }
Counter::Counter(const int num) { this->count = num; }

const int Counter::get_count() { return this->count; }
