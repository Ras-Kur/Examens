#include<iostream>
#include<ctime>
#include <vector>
#include<conio.h>

int main()
{
	setlocale(LC_ALL, "ru");						 //		русска€ локализаци€, может пригодитс€

	srand(time(NULL));				    			   //	€дро времени дл€ посто€нного рандома

	bool cheсk_double;								 // 	дл€ уникального рандома без повторов

	int enter_size = 3;								   //	выбор пользователем размера пол€

	int size = enter_size * enter_size;				 // 	дл€ использовани€ во всей программе

	std::vector < std::vector<int>> pole 			   // 	новый двумерный вектор дл€ пол€

	(enter_size, std::vector<int>(enter_size));      //		перенос строки(указываю размер)

	int* buff_arr = new int[size]; 					   //	использую дл€ дл€ временного хранени€

	int* arr_while = new int[size];					 //		массив дл€ выхода из цикла while

	for (int i = 0; i <= size; i++)				       //	заполн€ю массив от единицы по пор€дку
		arr_while[i] = i + 1;

	arr_while[size - 1] = 0;							 //		последнее значение мен€ю на ноль

	int buff_num = 0;						    	   //	переменна€ дл€ буфера значени€

	for (size_t i = 0; i < size; i++)				 //		заполн€ю массив уникальными знач-ми (-1)
		buff_arr[i] = -1;



	//  заполн€ю динамический массив рандомом
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
	int arr[1];
	for (size_t i = 0; i < 1; i++)
	{
		arr[i] = _getch();
		std::cout << arr[i] << " ";
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


	//это красивый вывод, ну как красивый, при€тно глазу.
	//               \|/
	for (size_t i = 0; i < size; i++)
	{
		if (enter_size > 3)
		{
			if (buff_arr[i] <= 9)
				std::cout << "0" << buff_arr[i] << " ";     // это не просто костыль, - это ’ќƒ”Ћ»!!!))))
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
	int x_buff = 1;
	int y_buff = 1;
	int buff_step = 0;
	int choice = _getch();
	
  do
  {
	switch (choice)
	{
	case 122:

		x++;
		
	default:
		break;
	}


	
	if (y == -2)
	{
		switch (x)
		{
		case -2:
			if (x == -2)
			{

				buff_step = buff_arr[8];
				buff_arr[8] = buff_arr[7];
				buff_arr[7] = buff_step;


				for (size_t i = 0; i < size; i++)
				{
					if (enter_size > 3)
					{
						if (buff_arr[i] <= 9)
							std::cout << "0" << buff_arr[i] << " ";     // это не просто костыль, - это ’ќƒ”Ћ»!!!))))
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
				break;
			}
			else
			{
				buff_step = buff_arr[7];
				buff_arr[7] = buff_arr[8];
				buff_arr[8] = buff_step;

				for (size_t i = 0; i < size; i++)
				{
					if (enter_size > 3)
					{
						if (buff_arr[i] <= 9)
							std::cout << "0" << buff_arr[i] << " ";     // это не просто костыль, - это ’ќƒ”Ћ»!!!))))
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
			if (x == -1)
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
							std::cout << "0" << buff_arr[i] << " ";     // это не просто костыль, - это ’ќƒ”Ћ»!!!))))
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
				for (size_t i = 0; i < size; i++)
				{
					if (enter_size > 3)
					{
						if (buff_arr[i] <= 9)
							std::cout << "0" << buff_arr[i] << " ";     // это не просто костыль, - это ’ќƒ”Ћ»!!!))))
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
  }while (buff_arr == arr_while);
}
