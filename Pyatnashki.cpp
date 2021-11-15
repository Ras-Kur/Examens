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

void setCursorPosition(int x, int y)
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}

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


int main()
{
	setlocale(LC_ALL, "ru"); // использую русский язык
	system("cls");  // зачищаю перед началом
	Logo();
	Start();
	system("cls");
	std::vector<std::vector<int>>pole;


}