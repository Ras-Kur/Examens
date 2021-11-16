/*«Пятнашки».
*
■ Выбор режима игры :
• 8 (3×3);
• 15 (4×4).
■ Режимы игры :

• Человек собирает;
• Компьютер собирает.
■ Начальное размешивание пятнашек :

• Ручное размешивание;
• Компьютерное размешивание.
■ Статистика :

• Количество времени, потраченное на сбор пятнашек;
• Количество перестановок пятнашек для сбора.*/
#include<iostream>
#include<Windows.h>
#include<conio.h>
#include<string>
#include<vector>
#include<ctime>
#include <algorithm>

void setCursorPosition(int x, int y)
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}
//ф-ция для перемещния курсора - для выбора строк и редактирования символов

void Logo()
{
	std::cout << "\t         ____  _  _____ _   _    _   _  _  _ _  _ _  _ \n";
	std::cout << "		 |  | / |   |   |   |   /\\   |  |  | |_/  |  | \n";
	std::cout << "		 |  | \\_|   |   |___|  /__\\  |  |  | | \\  | /| \n";
	std::cout << "		 |  | / |   |   |   | /    \\ |__|__| |  \\ |/ | \n";
	std::cout << "\n \207 \207  \207 \207  \207 \207  \207 \207  \207 \207  \207 \207  \207 \207  \207 \207  \207 \207";
	std::cout << "  \207 \207  \207 \207  \207 \207  \207 \207  \207 \207  \207 \207  \207 \207  \207 \207\n\n";
}
// главное лого из строк. написано - пятнашки.

void Start()
{
	while (_kbhit() == 0)
	{
		std::cout << "\t\t \223 НАЖМИТЕ ЛЮБУЮ КЛАВИШУ, ЧТО БЫ НАЧАТЬ ИГРУ! \224";
		std::cout << " \n\n \244    \244    \244    \244    \244    \244    \244    \244    \244    ";
		std::cout << " \244    \244    \244    \244    \244    \244    \244    \244    \n\n\n";
		Sleep(1000);
		setCursorPosition(0, 7);
		std::cout << "\t\t                                                \n";
		Sleep(300);
		setCursorPosition(0, 7);
		std::cout << "\t\t \223 НАЖМИТЕ ЛЮБУЮ КЛАВИШУ, ЧТО БЫ НАЧАТЬ ИГРУ! \224";
		setCursorPosition(0, 7);
	}
}
// текст о том, что бы нажали кнопку, что бы начать игру.


int Random_not_duble(int size, int* arr, int min, int max)
{		
	int dupl;// дубликаты
	int value;// значение
	int span = max - min + 1;// диапазон чисел

	for (size_t i = 0; i < size; i++)
	{
		for (; ; ) 
		{
			value = min + rand() % span;
			dupl = 0;
			for (size_t j = 0; j < i; j++)
			{
				if (value == arr[j])
				{ dupl = 1;
					break; 
				}
			}
			if (!dupl)
			 break;
		}
		arr[i] = value;
	}
	return 0;
}
// ф-ция для рандома без дублей.
int main()
{
	setlocale(LC_ALL, "ru"); // использую русский язык
	srand((int)time(NULL));

	system("cls");  // зачищаю перед началом
	Logo();
	Start();
	system("cls"); // приветствие отработало. дальше - меню...


	int buff;
	int size = 9;
	int min = 0, max = 8; // выбираем диапазон чисел для рандома
	int* pole = new int[size];

	int result = Random_not_duble(size, pole, min, max);
	for (size_t i = 0; i < size; i++)
		//std::cout << pole[i] << " "; 
	                                     //сейчас просто вывод рандома без повторений.


	if (pole[0]!=0)
	{
		buff = pole[0];
		for (size_t i = 0; i < size; i++)
		{
			if (pole[i]==0)
			{
				pole[0] = pole[i];
				pole[i] = buff;
			}
		}
	}                                    //  поставил ноль в начало всегда.
	for (size_t i = 0; i < size; i++)
		std::cout << pole[i] << " ";
	
	int x_min = 0, y_min = 0, x_max = size / 2, y_max = size / 2; // пытаюсь создать координаты.
	
	
}