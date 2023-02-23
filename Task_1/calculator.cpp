#include "calculator.h"
	
int Addition(int num1, int num2) {
	return num1 + num2;
}

int Subtraction(int num1, int num2) {
	return num1 - num2;
}

int Multiplication(int num1, int num2) {
	return num1 * num2;
}

int Division(int num1, int num2) {
	return num1 / num2;
}

int Exponentiation(int num1, int num2) {
	int result = num1;
	for (int i = 1; i < num2; i++)
		result *= num1;
	
	return result;
}