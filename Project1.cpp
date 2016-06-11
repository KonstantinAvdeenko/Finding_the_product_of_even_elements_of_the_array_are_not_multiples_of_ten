#include <tchar.h>
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int _tmain(int argc, wchar_t argv[]) // функция поддержки юникода и остальных символов
{
	srand(time(NULL)); // генератор псевдослучайных чисел зависящий от временной даты
	setlocale(LC_ALL, "Russian"); // поддержка работы с русскими символами
	int arr[30];
	for (int i = 0; i < 30; i++)
	{
		arr[i] = rand() % 100;
		cout << " " << arr[i]; // заполнение и вывод элементов массива с рандомными числами от 0 до 100
	}
	int pr = 1;
	for (int j = 0; j<30; j++)
	{
		if (arr[j] % 2 == 0)
		{
			if (arr[j] % 10 != 0)
			{ 
				 pr = pr*arr[j];  
			}
		}
	}
	cout << endl;
	cout << "Произведение четных элементов массива, не кратных 10 равно " << pr;
	cin.get(); // окончание работы с потоками
	return 0;
}