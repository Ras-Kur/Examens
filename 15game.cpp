#include<iostream>
#include<ctime>
#include <vector>
#include<conio.h>

bool Swipe(int arr1[], int arr2[], int s)
{
	int flag = 0;
	for (int i = 0; i < s; i++)
	{
		if (arr1[i] != arr2[i])
		{
			flag + 1;
		}
		flag = -1;
		if (flag==s)
		{
			return true;
		}
		return false;
	}
}

int main()
{

	
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

	std::cout<<Swipe(buff_arr, arr_while, size);

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
	int arr[5];
	for (size_t i = 0; i < 5; i++)
	{
		arr[i] = _getch();
		std::cout << arr[i] << " ";
	}






	int x = -3;
	int y = -2;
	int x_buff = 1;
	int y_buff = 1;
	int buff_step = 0;
	int choice = _getch();

	
	

	do
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



	} while (Swipe(buff_arr, arr_while, size)==1);
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
	
}
