#include "cal.h"

void Menu(){
	printf("###############################\n");
	printf("## 1. ADD            2. SUB  ##\n");
	printf("## 3. MUL            4. DIV  ##\n");
	printf("##                   0. QUIT ##\n");
	printf("###############################\n");
	printf("Please Enter:");
}
int main(){
	int(*p[4])(int, int) = { my_add, my_sub, my_mul, my_div };

	int quit = 0;
	while (!quit){
		Menu();
		int select = 0;
		scanf("%d", &select);

		if (select == 0){
			quit = 1;
			continue;
		}
		//if(select >= 1 && select <= 4){
		if (select < 1 || select > 4){
			printf("Enter Error, Try Again!\n");
			continue;
		}

		int x = 0;
		int y = 0;
		printf("请输入您的操作数(用空格隔开): ");
		scanf("%d %d", &x, &y);

		int z = p[select - 1](x, y);
		printf("计算结果是: %d\n", z);
		
	}
	printf("ByeBye!");
	system("pause");
	return 0;
}