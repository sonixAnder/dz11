#include<iostream>
#include <windows.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int userChoice, i, j, step;
	const int size1 = 10;
	const int size2 = 12;

	do 
	{	
		cout << "Меню выбора рисунка" << endl;
		cout << "--------------------------------------" << endl;
		cout << "1 - a\n";
		cout << "2 - b\n";
		cout << "3 - c\n";
		cout << "4 - d\n";
		cout << "5 - e\n";
		cout << "6 - выход\n";
		cout << "--------------------------------------" << endl;
		cout << "Сделайте свой выбор, введя цифру: " << endl;
		
		cin >> userChoice;

		switch (userChoice) 
		{
		case 1:
		{
			cout << "Треугольная версия - a\n";
			for (i = 0; i < size1; i++)
			{
				for (j = 0; j < size1; j++)
				{
					if (j >= i)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
			break;
		}
		case 2:
		{
			cout << "Треугольная версия - b\n";
			for (i = 0; i < size1; i++)
			{
					for (j = 0; j <= i; j++)
					{
						cout << "*";
					}
				cout << "\n";
			}
			break;
		}
		case 3:
		{
			cout << "Треугольная версия - c\n";
			for (i = 0; i <= size2 / 2; i++)
			{
				for (j = 0; j <= size2 - i; j++)
				{
					if (j >= i)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
				cout << "\n";
			}
			break;
		}
		case 4:
		{
			cout << "Треугольная версия - d\n";
			step = 1;
			for (i = 0; i < size2; i++)
			{
				if (i <= size2 / 2 - 1)
				{
					cout << "\n";
				}
				else
				{
					for (j = 0; j < i; j++)
					{
						if (j >= i - step)
						{
							cout << "*";
						}
						else
						{
							cout << " ";
						}
					}
					step = step + 2;
					cout << "\n";
				}
			}
			break;
		}
		case 5:
		{
			cout << "Треугольная версия - e\n";
			step = 1;
			for (i = 0; i < size2; i++)
			{
				if (i <= size2 / 2 - 1)
				{
						for (j = 0; j <= size2 - i; j++)
						{
							if (j >= i)
							{
								cout << "*";
							}
							else
							{
								cout << " ";
							}
						}
					cout << "\n";
				}
				else
				{
					for (j = 0; j < i; j++)
					{
						if (j >= i - step)
						{
							cout << "*";
						}
						else
						{
							cout << " ";
						}
					}
					step = step + 2;
					cout << "\n";
				}
			}
			break;
		}
		case 6:
			{
				cout << "Адиос!" << endl;
				break;
			}
		default:
			cout << "АХТУНГ!" << endl;
		}
	} while (userChoice != 6);
	return 0;
}