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
		printf("警告: 您进行了除零操作, 结果异常!\n");
		return -1;
	}
	return x / y;
}

