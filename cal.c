#include "cal.h"

int my_add(int x, int y){
	return x + y;
}
int my_sub(int x, int y){
	return x - y;
}
int my_mul(int x, int y){
	return x * y;
}
int my_div(int x, int y){
	if (y == 0){
		printf("����: �������˳������, ����쳣!\n");
		return -1;
	}
	return x / y;
}

