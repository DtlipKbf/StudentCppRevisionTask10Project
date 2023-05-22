#include "tasks.h"

/*	Task 03. The Double Max [вторая максимальная цифра]
*
*	Дано целое число. Необходимо определить вторую по величине цифру данного числа, 
*	т.е. цифру, которая будет наибольшим, если из числа удалить наибольшую цифру.
*	Если нет такой цифры, то должно быть возвращено число -1.
*
*	Формат входных данных [input]
*	На вход подаётся целое число в диапазоне типа long long.
*
*	Формат выходных данных [output]
*	Должно быть возвращено число, которое является решение задачи.
*
*	[ input 1]: 12345
*	[output 1]: 4
*
*	[ input 2]: -56789
*	[output 2]: 8
*
*	[ input 3]: 11111
*	[output 3]: -1
*
*	[ input 4]: 0
*	[output 4]: -1
*/

int task03(long long n) {
	cout << n << endl;
	if (n < 0) n *= -1;
	long long copy = n;
	
	if (n == 0) return -1;

	int max = n % 10;
	while (n > 0) {
		max = (n % 10 > max) ? n % 10 : max;
		n /= 10;
	}
	n = copy;
	int min = n % 10;
	while (n > 0) {
		min = (n % 10 < min) ? n % 10 : min;
		n /= 10;
	}

	if (min == max) return -1;

	n = copy;
	int max2 = (n % 10 != max) ? n % 10 : (n/=10) % 10;
	while (n > 0) {
		max2 = (n % 10 > max2 && n % 10 < max) ? n % 10 : max2;
		n /= 10;
	}

	cout << max2 << endl;

	return max2;
}