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
	
	(enter_size, std::vector<int> (enter_size));     //		перенос строки(указываю размер)
	
	int* buff_arr = new int[size]; 					   //	использую дл€ дл€ временного хранени€
	
	int buff_num = 0;						    	 //		переменна€ дл€ буфера значени€
	
	for (size_t i = 0; i < size; i++)				  //	заполн€ю массив уникальными знач-ми (-1)
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
	/*int arr[10];
	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = _getch();
		std::cout << arr[i] << " ";
	}*/

	
	

//   ставлю ноль в конец с заменой чисел
//              \|/
for (size_t i = 0; i < size; i++)								
	{
		if (buff_arr[i]==0&&buff_arr[i]!= buff_arr[size - 1])
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
		if (enter_size>3)
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
