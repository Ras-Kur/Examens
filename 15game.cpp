#include<iostream>
#include<ctime>
#include <vector>
#include<conio.h>

int main()
{
	setlocale(LC_ALL, "ru");						 //		������� �����������, ����� ����������

	srand(time(NULL));				    			   //	���� ������� ��� ����������� �������

	bool che�k_double;								 // 	��� ����������� ������� ��� ��������

	int enter_size = 3;								   //	����� ������������� ������� ����

	int size = enter_size * enter_size;				 // 	��� ������������� �� ���� ���������

	std::vector < std::vector<int>> pole 			   // 	����� ��������� ������ ��� ����

	(enter_size, std::vector<int>(enter_size));      //		������� ������(�������� ������)

	int* buff_arr = new int[size]; 					   //	��������� ��� ��� ���������� ��������

	int* arr_while = new int[size];					 //		������ ��� ������ �� ����� while

	for (int i = 0; i <= size; i++)				       //	�������� ������ �� ������� �� �������
		arr_while[i] = i + 1;

	arr_while[size - 1] = 0;							 //		��������� �������� ����� �� ����

	int buff_num = 0;						    	   //	���������� ��� ������ ��������

	for (size_t i = 0; i < size; i++)				 //		�������� ������ ����������� ����-�� (-1)
		buff_arr[i] = -1;



	//  �������� ������������ ������ ��������
	//             \|/
	for (int i = 0; i < size; )
	{
		che�k_double = true;
		int	rand_num = rand() % size;

		for (int j = 0; j < i; j++)
		{
			if (buff_arr[j] == rand_num)
			{
				che�k_double = false;
				break;
			}
		}
		if (che�k_double)
		{
			buff_arr[i] = rand_num;
			i++;
		}
	}


	/*do
	{
		//���������
		switch (_getch())                // 13 enter    32 backspase    27 escape
		{
			case 72:	(0, -1);         break; //�����
			case 80:	(0, 1);          break; //����
			case 75:	(-1, 0);		 break; //�����
			case 77:	(1, 0);			 break; //������
			case 32:                     break; //������
		}
	} while (true);*/
	int arr[1];
	for (size_t i = 0; i < 1; i++)
	{
		arr[i] = _getch();
		std::cout << arr[i] << " ";
	}




	//   ������ ���� � ����� � ������� �����
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


	//��� �������� �����, �� ��� ��������, ������� �����.
	//               \|/
	for (size_t i = 0; i < size; i++)
	{
		if (enter_size > 3)
		{
			if (buff_arr[i] <= 9)
				std::cout << "0" << buff_arr[i] << " ";     // ��� �� ������ �������, - ��� ������!!!))))
			else
				std::cout << buff_arr[i] << " ";
		}
		else
			std::cout << buff_arr[i] << " ";

		if (i == enter_size - 1 || i == enter_size * 2 - 1 || i == enter_size * 3 - 1)  // ������ ����� ���� ����� �����.
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
							std::cout << "0" << buff_arr[i] << " ";     // ��� �� ������ �������, - ��� ������!!!))))
						else
							std::cout << buff_arr[i] << " ";
					}
					else
						std::cout << buff_arr[i] << " ";

					if (i == enter_size - 1 || i == enter_size * 2 - 1 || i == enter_size * 3 - 1)  // ������ ����� ���� ����� �����.
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
							std::cout << "0" << buff_arr[i] << " ";     // ��� �� ������ �������, - ��� ������!!!))))
						else
							std::cout << buff_arr[i] << " ";
					}
					else
						std::cout << buff_arr[i] << " ";

					if (i == enter_size - 1 || i == enter_size * 2 - 1 || i == enter_size * 3 - 1)  // ������ ����� ���� ����� �����.
					{
						std::cout << "\n";
					}
				}
			}

			break; //������ ���� (3�3)

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
							std::cout << "0" << buff_arr[i] << " ";     // ��� �� ������ �������, - ��� ������!!!))))
						else
							std::cout << buff_arr[i] << " ";
					}
					else
						std::cout << buff_arr[i] << " ";

					if (i == enter_size - 1 || i == enter_size * 2 - 1 || i == enter_size * 3 - 1)  // ������ ����� ���� ����� �����.
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
							std::cout << "0" << buff_arr[i] << " ";     // ��� �� ������ �������, - ��� ������!!!))))
						else
							std::cout << buff_arr[i] << " ";
					}
					else
						std::cout << buff_arr[i] << " ";

					if (i == enter_size - 1 || i == enter_size * 2 - 1 || i == enter_size * 3 - 1)  // ������ ����� ���� ����� �����.
					{
						std::cout << "\n";
					}
				}
			}

			break; //��������

		case 0:
			if (x == -1)
			{
				buff_step = buff_arr[7];
				buff_arr[7] = buff_arr[6];
				buff_arr[6] = buff_step;
				x++;
			}
			break; //����� ����

		default:
			std::cout << " \n�������� �� ��������.";
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
			break; //������ ���� (3�3)

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

			break; //��������

		case 0:
			if (x == -1)
			{
				buff_step = buff_arr[4];
				buff_arr[4] = buff_arr[3];
				buff_arr[3] = buff_step;
				x++;
			}
			break; //����� ����

		default:
			std::cout << " \n�������� �� ��������.";
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
			break; //������ ���� (3�3)

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

			break; //��������

		case 0:
			if (x == -1)
			{
				buff_step = buff_arr[1];
				buff_arr[1] = buff_arr[0];
				buff_arr[0] = buff_step;
				x++;
			}
			break; //����� ����

		default:
			std::cout << " \n�������� �� ��������.";
			break;
		}
	}
  }while (buff_arr == arr_while);
}
