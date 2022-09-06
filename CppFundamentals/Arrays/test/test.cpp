﻿#include <iostream>
using namespace std;
const unsigned maxSize = 200;
bool getArray(int arr[], int& arrSize) { // създаваш булева функция , която да чете входни стойности за масива arr[] с дължина arrSize ;
	cin >> arrSize; // въвежда се размера на масива
	for (int i = 0; i < arrSize; i++) {
		cin >> arr[i]; // за всяка една стойност от 0 до arrSize - 1 въвежда стойности; получава се масив ; примерно { 1 , 3 , 7 }
	}
	return true;
}
int main(void)
{
	int arrSize; // декларираме arrSize , който ще бъде ваведен във фунцкията
	int arr[maxSize]; // декларираме , че масива arr , ще бъде първоначално от 200 символа ( защото трябва да въведем някакъв брой иначе ще крашне кода )
	getArray(arr, arrSize); // насочваме или още стартираме фунцията getArray със стойности arr и аrrSize ( 200 )
	int min = 0, temp = 0; // това е нужно, защото това са локални променливи и е важно да са нули заради кода по-долу !!!
	for (int mul1 = 0; mul1 < arrSize; mul1++) {
		for (int mul2 = 0; mul2 < arrSize; mul2++) {
			/* представи си следното нещо : имаш вход два масива{1 , 2 , 3} и{2 , 3 , 4}. За да ги сравниш трябва да направиш сравнение всеки със всеки символ, затова циклите са 2 броя.В табличен вид би изглеждало така :
			1 2 3
			2 н д н
			3 н н д
			4 н н н
			като "д" означава, че равенството е вярно , а "н" , че равенствтото е невярно */
			temp = arr[mul1] - arr[mul2]; // за да ставним двете числа от масива вадим от едното другото, няма значение кое от кое ще вадим. Ако те са "0" / нула означава, че двете числа са абсолютно равни , а ние искаме да намерим най-голямата разлика т.е. на нас не ни трябват да са равни. Затова ползваме следното :
			if (min == 0)
				min = abs(arr[mul1] - arr[mul2]);
			else
			{
				if (temp != 0 && abs(temp) < min)
					min = abs(temp);
			}
		}
	}
	cout << min << endl;
}