
#include<Windows.h>
#include<stdio.h>

void gotoxy(int x, int y)
{	
    COORD coord = {x, y};   
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void print_cal()
{	system("cls");
	gotoxy(0,0);
	printf("|________________________________________ |         本计算器能够进行10进制数\n");
	printf("||                                       ||         + - * / () 的连续运算\n");
	printf("||           欢迎使用多功能计算器        ||         请务必使用英文输入法\n");
	printf("||_______________________________________||\n");
	printf("||                      072040127 樊卓铭 ||         请输入完整的运算表达式：\n");
	printf("||_______________________________________||\n");
	printf("|                                         |\n");
	printf("|                                         |\n");
	printf("|____  _______  _______  _______  ________|\n");
	printf("|  _____   _____   _____   _____   _____  |\n");
	printf("|  |   |   |   |   |   |   |   |   |   |  |\n");
	printf("|  | 6 |   | 7 |   | 8 |   | 9 |   | 0 |  |\n");
	printf("|  |   |   |   |   |   |   |   |   |   |  |\n");
	printf("|  -----   -----   -----   -----   -----  |\n");
	printf("|  _____   _____   _____   _____   _____  |\n");
	printf("|  |   |   |   |   |   |   |   |   |   |  |\n");
	printf("|  | 1 |   | 2 |   | 3 |   | 4 |   | 5 |  |\n");
	printf("|  |   |   |   |   |   |   |   |   |   |  |\n");
	printf("|  -----   -----   -----   -----   -----  |\n");
	printf("|  _____   _____   _____   _____   _____  |\n");
	printf("|  |   |   |   |   |   |   |   |   |   |  |\n");
	printf("|  | + |   | - |   | * |   | / |   | C |  |\n");
	printf("|  |   |   |   |   |   |   |   |   |   |  |\n");
	printf("|  -----   -----   -----   -----   -----  |\n");
	printf("|  _____   _____   _________________      |\n");
	printf("|  |   |   |   |   |               |      |\n");
	printf("|  | ( |   | ) |   |       =       |      |\n");
	printf("|  |   |   |   |   |               |      |\n");
	printf("|  -----   -----   -----------------      |\n");
	printf("|_________________________________________|\n");

}



void error_print(char a[])
{	print_cal();
	gotoxy(1,7);
	printf("%s",a);
	gotoxy(36,8);
	printf("error");
	gotoxy(52,7);
	printf("运算式错误,");
	system("pause");
}

void right_print(char a[],double result)
{	print_cal();
	gotoxy(3,7);
	printf("%s",a);
	gotoxy(1,8);
	printf(" = %.4lf",result);
	gotoxy(52,7);
	printf("按任意键继续，退出请关闭窗口");
	gotoxy(52,8);
	system("pause");
}

	



