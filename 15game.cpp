#include<iostream>
#include<ctime>
#include <vector>
#include<conio.h>

int Menu_pole()
{
	
}


	//сколько времени птрачено. и сколько шагов


int Swipe(int arr1[], int arr2[], int s)
{
	int flag = 0;
	int result = 0;
	for (int i = 0; i < s; i++)
	{
		if (arr1[i] == arr2[i])
			flag ++;
		
		if (flag == s)
			result = 1;

		//std::cout << arr1[i] << " - " << arr2[i] << "\n";
	}

	return result;
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

void Step(int &a, int &b)

{
	int buff = 0;
	buff = a;
	a = b;
	b = buff;
}
//перемещение( не для слабонервных)

void print_arr_rand(int buff_arr[], int enter_size, int size)
{
	for (int i = 0; i < size; i++)
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
// вывод игрового поля 

int main()
{

	/*time_t seconds;
	seconds = time(NULL);
	time_t second2;
	second2 = time(NULL);
	int res_time = (second2 - seconds) / 60;
	*/
	setlocale(LC_ALL, "ru");								 //			русская локализация, может пригодится
	
	system("cls");											 //			чистим консоль перед началом									
	
	srand(time(NULL));					  					 //			ядро времени для постоянного рандома

	Logo();													 //			главное лого Пятнашки
	
	std::cout << "\n\n\t\t\t нажмите клавишу \"Enter\"...";
	std::cin.get();
	
	system("cls");											 //			отчищаем от лого и пресаникея
	
	

	

	bool cheсk_double;										 // 		для уникального рандома без повторов

	int enter_size = 3;										 //			выбор пользователем размера поля

	int size = enter_size * enter_size;						 // 		для использования во всей программе

	int* buff_arr = new int[size]; 							 //			использую для для временного хранения

	int* arr_while = new int[size];							 //			массив для выхода из цикла while

	for (int i = 0; i <= size; i++)							 //			заполняю массив от единицы по порядку
		arr_while[i] = i + 1;

	arr_while[size - 1] = 0;								 //			последнее значение меняю на ноль

	int buff_num = 0;										 //			переменная для буфера значения

	for (size_t i = 0; i < size; i++)						 //			заполняю массив уникальными знач-ми (-1)
		buff_arr[i] = -1;

	int x = -enter_size, y = -enter_size;									//	перевод начала отсчёта вниз в право к нулю

	int& a1 = buff_arr[0], & a2 = buff_arr[1], & a3 = buff_arr[2];
	int& a4 = buff_arr[3], & a5 = buff_arr[4], & a6 = buff_arr[5];			//	делаю ссылки на все значения массива
	int& a7 = buff_arr[6], & a8 = buff_arr[7], & a9 = buff_arr[8];

	int& a10 = buff_arr[9], & a11 = buff_arr[10], & a12 = buff_arr[11];		//	жостко, но жизнь - сложная штука. 
	int& a13 = buff_arr[12], & a14 = buff_arr[13], & a15 = buff_arr[14];
	int& a16 = buff_arr[15];

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
	/*for (size_t i = 0; i < size; i++)
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
	}*/

	

	//Swipe(buff_arr, arr_while, size);								      // вывод первого варианта рандома 	



	
	bool flag = true;
	int a = -1;						//	выбор размера поля
	do
	{
		std::cout << "\n\n\t\t ВЫ В ГЛАВНОМ МЕНЮ\n";
		std::cout << "\n\n\t  выберите размер игрового поля (сложность)...\n\n";
		std::cout << "\n..  1  -  поле 3х3 (лёгкий режим)...";
		std::cout << "\n..  2  -  поле 4х4 (обычный режим)...";
		std::cout << "\n..  3  -  поле 5х5 (сложный режим)- сначала пройдите 4х4";
		std::cout << "\n..  4  -  поле 9х9 (демонический режим)- в разработке...";
		std::cout << "\n..  0  -  поле 0х0 (не играть и просто выйти из игры)...\n\n\t\t";
		std::cin >> a;
		if (a >= 0 && a < 3)
		{
			flag = false;
		}
		else
		{
			flag = true;
		}
	} while (flag);			
	return a;




	bool flag = true;
	int b = -1;						// собирает человек или робот
	do
	{

		std::cout << "\n\n\t\t выберите, кто будет разгадывать головоломку..";
		std::cout << "\n..  1  - Вы, своими руками и мастерством...";
		std::cout << "\n..  2  - Я, машина которая знает все ходы...\n\n\t\t";
		std::cin >> b;
		if (b > 0 && b < 3)
		{
			flag = false;
		}
		else
		{
			flag = true;
		}
	} while (flag);
	return b;




	bool flag = true;
	int c = -1;						// перемешивает человек или рандом
	do
	{

		std::cout << "\n\n\t\t выберите, кто будет перемешивать цыфры..";
		std::cout << "\n..  1  - Вы, своими руками (долго и скучно)...";
		std::cout << "\n..  2  - Я, моментально и бесподобно...\n\n\t\t";
		std::cin >> c;
		if (c > 0 && c < 3)
		{
			flag = false;
		}
		else
		{
			flag = true;
		}
	} while (flag);
	return c;




	int choice = _getch();	
	if (a == 1 && b == 1);
	{																//3x3
		while (Swipe(buff_arr, arr_while, size) == 0)
		{
			switch (_getch())
			{
			case 75://лево
				x++;
				break;
			case 77://право
				x--;
				break;
			case 72://верх
				y++;
				break;//вниз
			case 80:
				y--;
				break;
			case 27://ескейп
				return 0;
			default:
				std::cout << "\n\n     управление - на стрелки, \"esc\" - выход.";
				break;
			}

			switch (x)
			{
			case 75://лево

				break;
			case 77://право

				break;
			case 72://верх

				break;//вниз
			case 80:

				break;
			case 27://ескейп
				return 0;
			default:
				std::cout << "\n\n     управление - на стрелки, \"esc\" - выход.";
				break;
			}

			switch (y)
			{
			case 75://лево

				break;
			case 77://право

				break;
			case 72://верх

				break;//вниз
			case 80:

				break;
			case 27://ескейп
				return 0;
			default:
				std::cout << "\n\n     управление - на стрелки, \"esc\" - выход.";
				break;
			}
		}
	}if (a == 2 && b == 1)
	{																//4x4
		while (Swipe(buff_arr, arr_while, size) == 0)
		{
			switch (_getch())
			{
			case 75://лево
				x++;
				break;
			case 77://право
				x--;
				break;
			case 72://верх
				y++;
				break;//вниз
			case 80:
				y--;
				break;
			case 27://ескейп
				return 0;
			default:
				std::cout << "\n\n     управление - на стрелки, \"esc\" - выход.";
				break;
			}

			switch (x)
			{
			case 75://лево

				break;
			case 77://право

				break;
			case 72://верх

				break;//вниз
			case 80:

				break;
			case 27://ескейп
				return 0;
			default:
				std::cout << "\n\n     управление - на стрелки, \"esc\" - выход.";
				break;
			}

			switch (y)
			{
			case 75://лево

				break;
			case 77://право

				break;
			case 72://верх

				break;//вниз
			case 80:

				break;
			case 27://ескейп
				return 0;
			default:
				std::cout << "\n\n     управление - на стрелки, \"esc\" - выход.";
				break;
			}
		}
	}
	
	
	
	/*do
	
	        system("cls");
			Step(a9, a8);
			print_arr_rand(buff_arr, enter_size, size);


			case 72: //вверх
			case 80: //вниз
			case 75: //влево
			case 77: //вправо
			case 32:  //пробел
			13 enter
			27 escape
	*/
	
}
