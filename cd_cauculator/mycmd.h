
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
	printf("|________________________________________ |         ���������ܹ�����10������\n");
	printf("||                                       ||         + - * / () ����������\n");
	printf("||           ��ӭʹ�ö๦�ܼ�����        ||         �����ʹ��Ӣ�����뷨\n");
	printf("||_______________________________________||\n");
	printf("||                      072040127 ��׿�� ||         ������������������ʽ��\n");
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
	printf("����ʽ����,");
	system("pause");
}

void right_print(char a[],double result)
{	print_cal();
	gotoxy(3,7);
	printf("%s",a);
	gotoxy(1,8);
	printf(" = %.4lf",result);
	gotoxy(52,7);
	printf("��������������˳���رմ���");
	gotoxy(52,8);
	system("pause");
}

	



