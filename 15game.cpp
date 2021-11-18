#include<iostream>
#include<ctime>
#include <vector>
#include<conio.h>

void Menu()
{
	// выбор режима 3х3 4х4 5х5 9х9

	// собирает человек или робот или вместе

	// перемешивает человек или рандом

	//сколько времени птрачено. и сколько шагов
}

void Swipe(int arr1[], int arr2[], int s)
{
	int flag = 0;
	int result = 0;
	for (int i = 0; i < s; i++)
	{
		if (arr1[i] == arr2[i])
			flag ++;
		
		if (flag == s)
			result = 1;
		std::cout << arr1[i] << " - " << arr2[i] << "\n";
	}

	
}
// проверка рандома с порядочным.( проверка на выигрыш )

void Logo()
{
	std::cout << "\t         ____  _  _____ _   _    _   _  _  _ _  _ _  _ \n";
	std::cout << "		 |  | / |   |   |   |   /\\   |  |  | |_/  |  | \n";
	std::cout << "		 |  | \\_|   |   |___|  /__\\  |  |  | | \\  | /| \n";
	std::cout << "		 |  | / |   |   |   | /    \\ |__|__| |  \\ |/ | \n";
	std::cout << "\n \277 \277  \277 \277  \277 \277  \277 \277  \277 \277  \277 \277  \277 \277  \277 \277  \277 \277";
	std::cout << "  \277 \277  \277 \277  \277 \277  \277 \277  \277 \277  \277 \277  \277 \277  \277 \277  \277 \277\n\n";
}
// главное лого из строк. написано - пятнашки.

void Xstep1(int &a, int &b)
{
	int buff = 0;
	buff = a;
	a = b;
	b = buff;
}

int main()
{
	
	system("cls");									 //			чистим консоль перед началом									
		
	Logo();											   //		главное лого Пятнашки

	
	
	//system("cls");									   //		отчищаем от лого и пресаникея
	
	setlocale(LC_ALL, "ru");						 //			русская локализация, может пригодится

	srand(time(NULL));				    			   //		ядро времени для постоянного рандома

	bool cheсk_double;								 // 		для уникального рандома без повторов

	int enter_size = 3;								   //		выбор пользователем размера поля

	int size = enter_size * enter_size;				 // 		для использования во всей программе

	std::vector < std::vector<int>> pole 			   // 		новый двумерный вектор для поля

	(enter_size, std::vector<int>(enter_size));      //			перенос строки(указываю размер)

	int* buff_arr = new int[size]; 					   //		использую для для временного хранения

	int* arr_while = new int[size];					 //			массив для выхода из цикла while

	for (int i = 0; i <= size; i++)				       //		заполняю массив от единицы по порядку
		arr_while[i] = i + 1;

	arr_while[size - 1] = 0;							 //		последнее значение меняю на ноль

	int buff_num = 0;						    	   //		переменная для буфера значения

	for (size_t i = 0; i < size; i++)				     //		заполняю массив уникальными знач-ми (-1)
		buff_arr[i] = -1;

	//std::cout<<Swipe(buff_arr, arr_while, size);

	//  заполняю динамический массив рандомом
	//             \|/
	for (int i = 0; i < size; )
	{
		cheсk_double = true;
		int	rand_num = rand() % size;

		for (int j = 0; j < i; j++)
		{
			if (buff_arr[j] == rand_num)
			{
				cheсk_double = false;
				break;
			}
		}
		if (cheсk_double)
		{
			buff_arr[i] = rand_num;
			i++;
		}
	}

	//   ставлю ноль в конец с заменой чисел
    //              \|/
	for (size_t i = 0; i < size; i++)
	{
		if (buff_arr[i] == 0 && buff_arr[i] != buff_arr[size - 1])
		{
			buff_num = buff_arr[i];
			buff_arr[i] = buff_arr[size - 1];
			buff_arr[size - 1] = buff_num;

		}
	}


	//это красивый вывод, ну как красивый, приятно глазу.
	//               \|/
	for (size_t i = 0; i < size; i++)
	{
		if (enter_size > 3)
		{
			if (buff_arr[i] <= 9)
				std::cout << "0" << buff_arr[i] << " ";     // это не просто костыль, - это ХОДУЛИ!!!))))
			else
				std::cout << buff_arr[i] << " ";
		}
		else
			std::cout << buff_arr[i] << " ";

		if (i == enter_size - 1 || i == enter_size * 2 - 1 || i == enter_size * 3 - 1)  // скорее всего тоже можно иначе.
		{
			std::cout << "\n";
		}
	}

	int x = -3;
	int y = -2;
	int& a1 = buff_arr[0];
	int& a2 = buff_arr[1];
	int& a3 = buff_arr[2];
	int& a4 = buff_arr[3];
	int& a5 = buff_arr[4];
	int& a6 = buff_arr[5];
	int& a7 = buff_arr[6];
	int& a8 = buff_arr[7];
	int& a9 = buff_arr[8];                                 // жостко, но жизнь - сложная штука. 
	int& a10= buff_arr[9];
	int& a11= buff_arr[10];
	int& a12= buff_arr[11];
	int& a13= buff_arr[12];
	int& a14= buff_arr[13];
	int& a15= buff_arr[14];
	int& a16 = buff_arr[15];
	//std::cout << a1;
	Swipe(buff_arr, arr_while, size);
	
	int a;
	std::cin >> a;

	switch (a)
	{
	case 1:
		Xstep1(a9,a8);
		Swipe(buff_arr, arr_while, size);
		break;
	default:
		break;
	}
	/*do
	{
		//заполнить
		switch (_getch())                // 13 enter    32 backspase    27 escape
		{
			case 72:	(0, -1);         break; //вверх
			case 80:	(0, 1);          break; //вниз
			case 75:	(-1, 0);		 break; //влево
			case 77:	(1, 0);			 break; //вправо
			case 32:                     break; //пробел
		}
	} while (true);*/
	//int arr[5];
	//for (size_t i = 0; i < 5; i++)
	//{
	//	arr[i] = _getch();
	//	std::cout << arr[i] << " ";
	//}






	
	int x_buff = 1;
	int y_buff = 1;
	
	

	
	
	int choice = _getch();
	/*do
	{
		system("cls");
		switch (choice)
		{
		case 75:
			x++;
			//std::cout << " L";
		default:
			break;
		}



	}while (Swipe(buff_arr, arr_while, size)!=0);
		{


			std::cout << x;
			if (y == -2)
			{
				switch (x)
				{
				case -2:
					if (x == -1)
					{
						buff_step = buff_arr[7];
						buff_arr[7] = buff_arr[8];
						buff_arr[8] = buff_step;
						x--;
						for (size_t i = 0; i < size; i++)
						{
							if (enter_size > 3)
							{
								if (buff_arr[i] <= 9)
									std::cout << "0" << buff_arr[i] << " ";     // это не просто костыль, - это ХОДУЛИ!!!))))
								else
									std::cout << buff_arr[i] << " ";
							}
							else
								std::cout << buff_arr[i] << " ";

							if (i == enter_size - 1 || i == enter_size * 2 - 1 || i == enter_size * 3 - 1)  // скорее всего тоже можно иначе.
							{
								std::cout << "\n";
							}
						}
					}
					else
					{
						buff_step = buff_arr[8];
						buff_arr[8] = buff_arr[7];
						buff_arr[7] = buff_step;
						x++;
						for (size_t i = 0; i < size; i++)
						{
							if (enter_size > 3)
							{
								if (buff_arr[i] <= 9)
									std::cout << "0" << buff_arr[i] << " ";     // это не просто костыль, - это ХОДУЛИ!!!))))
								else
									std::cout << buff_arr[i] << " ";
							}
							else
								std::cout << buff_arr[i] << " ";

							if (i == enter_size - 1 || i == enter_size * 2 - 1 || i == enter_size * 3 - 1)  // скорее всего тоже можно иначе.
							{
								std::cout << "\n";
							}
						}
					}

					break; //правый край (3х3)

				case -1:
					if (x == -2)
					{
						buff_step = buff_arr[8];
						buff_arr[8] = buff_arr[7];
						buff_arr[7] = buff_step;
						x++;
						for (size_t i = 0; i < size; i++)
						{
							if (enter_size > 3)
							{
								if (buff_arr[i] <= 9)
									std::cout << "0" << buff_arr[i] << " ";     // это не просто костыль, - это ХОДУЛИ!!!))))
								else
									std::cout << buff_arr[i] << " ";
							}
							else
								std::cout << buff_arr[i] << " ";

							if (i == enter_size - 1 || i == enter_size * 2 - 1 || i == enter_size * 3 - 1)  // скорее всего тоже можно иначе.
							{
								std::cout << "\n";
							}
						}
					}
					else
					{
						buff_step = buff_arr[6];
						buff_arr[6] = buff_arr[7];
						buff_arr[7] = buff_step;
						x--;
					}

					break; //середина

				case 0:
					if (x == -1)
					{
						buff_step = buff_arr[7];
						buff_arr[7] = buff_arr[6];
						buff_arr[6] = buff_step;
						x++;
					}
					break; //левый край

				default:
					std::cout << " \nдействие не возможно.";
					break;
				}
			}
			if (y == -1)
			{
				switch (x)
				{
				case -2:
					if (x == -1)
					{
						buff_step = buff_arr[4];
						buff_arr[4] = buff_arr[5];
						buff_arr[5] = buff_step;
						x--;
					}
					break; //правый край (3х3)

				case -1:
					if (x == -2)
					{
						buff_step = buff_arr[5];
						buff_arr[5] = buff_arr[4];
						buff_arr[4] = buff_step;
						x++;
					}
					else
					{
						buff_step = buff_arr[3];
						buff_arr[3] = buff_arr[4];
						buff_arr[4] = buff_step;
						x--;
					}

					break; //середина

				case 0:
					if (x == -1)
					{
						buff_step = buff_arr[4];
						buff_arr[4] = buff_arr[3];
						buff_arr[3] = buff_step;
						x++;
					}
					break; //левый край

				default:
					std::cout << " \nдействие не возможно.";
					break;
				}
			}
			if (y == 0)
			{
				switch (x)
				{
				case -2:
					if (x == -1)
					{
						buff_step = buff_arr[1];
						buff_arr[1] = buff_arr[2];
						buff_arr[2] = buff_step;
						x--;
					}
					break; //правый край (3х3)

				case -1:
					if (x == -2)
					{
						buff_step = buff_arr[2];
						buff_arr[2] = buff_arr[1];
						buff_arr[1] = buff_step;
						x++;
					}
					else
					{
						buff_step = buff_arr[0];
						buff_arr[0] = buff_arr[1];
						buff_arr[1] = buff_step;
						x--;
					}

					break; //середина

				case 0:
					if (x == -1)
					{
						buff_step = buff_arr[1];
						buff_arr[1] = buff_arr[0];
						buff_arr[0] = buff_step;
						x++;
					}
					break; //левый край

				default:
					std::cout << " \nдействие не возможно.";
					break;
				}
			}
		}
	}*/
}
