#pragma once
#include "tasks.h"

#define RIGHT " - completed successfully. Well DONE!!!"
#define WRONG " - was not running successfully. ERROR!"

void testingTask01() {
	bool result = task01(987'654'321) == 9
		&& task01(12'345) == 5
		&& task01(0) == 0
		&& task01(-15) == 5
		&& task01(15) == 5
		&& task01(-987'654'321) == 9
		&& task01(-12'345) == 5
		&& task01(9) == 9
		&& task01(-9) == 9
		&& task01(-9'223'372'036'854'775'807LL) == 9
		&& task01(9'223'372'036'854'775'807LL) == 9
		&& task01(-1'223'372'036'854'775'807LL) == 8
		&& task01(1'223'372'036'854'775'807LL) == 8
		&& task01(111) == 1
		&& task01(-111) == 1
		&& task01(999) == 9
		&& task01(-999) == 9
		&& task01(100) == 1
		&& task01(-1) == 1;

	cout << "Task 01 [Max Number Digit]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {
	bool result = task02(1234) == 1
		&& task02(4112) == 2
		&& task02(100) == 2
		&& task02(-2222) == 4
		&& task02(0) == 1
		&& task02(9) == 1
		&& task02(10) == 1
		&& task02(12) == 1
		&& task02(4321) == 1
		&& task02(-4321) == 1
		&& task02(-1234) == 1
		&& task02(2222) == 4
		&& task02(1111) == 4
		&& task02(9999) == 4
		&& task02(31313) == 2
		&& task02(13131) == 3
		&& task02(112233) == 2
		&& task02(223311) == 2
		&& task02(221133) == 2
		&& task02(2211133) == 3
		&& task02(2221133) == 2
		&& task02(2233311) == 2
		&& task02(-33333) == 5
		&& task02(-11111) == 5
		&& task02(-31313) == 2
		&& task02(-13131) == 3
		&& task02(-112233) == 2
		&& task02(-223311) == 2
		&& task02(-221133) == 2
		&& task02(-2211133) == 3
		&& task02(-2221133) == 2
		&& task02(-2233311) == 2
		&& task02(-9'223'372'036'854'775'807LL) == 2
		&& task02(9'223'372'036'854'775'807LL) == 2
		&& task02(-1'223'372'036'854'775'807LL) == 2
		&& task02(1'223'372'036'854'775'807LL) == 2;

	cout << "Task 02 [The Count of Min Number Digits]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {
	bool result = task03(12345) == 4
		&& task03(-56789) == 8
		&& task03(11) == -1
		&& task03(0) == -1
		&& task03(1) == -1
		&& task03(9) == -1
		&& task03(-1) == -1
		&& task03(-9) == -1
		&& task03(10) == 0
		&& task03(-10) == 0
		&& task03(100) == 0
		&& task03(-100) == 0
		&& task03(1000) == 0
		&& task03(-1000) == 0
		&& task03(12) == 1
		&& task03(-12) == 1
		&& task03(321) == 2
		&& task03(4321) == 3
		&& task03(-321) == 2
		&& task03(-4321) == 3
		&& task03(58679) == 8
		&& task03(85679) == 8
		&& task03(41) == 1
		&& task03(-14) == 1
		&& task03(95678) == 8
		&& task03(56879) == 8
		&& task03(-9'223'372'036'854'775'807LL) == 8
		&& task03(9'223'372'036'854'775'807LL) == 8
		&& task03(-1'223'372'036'854'775'807LL) == 7
		&& task03(1'223'372'036'854'775'807LL) == 7;

	cout << "Task 03 [The Double Max]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {
	bool result = task04(1) == 0
		&& task04(2) == 1
		&& task04(3) == 1
		&& task04(4) == 2
		&& task04(5) == 3
		&& task04(6) == 5
		&& task04(7) == 8
		&& task04(8) == 13
		&& task04(9) == 21
		&& task04(10) == 34
		&& task04(11) == 55
		&& task04(12) == 89
		&& task04(13) == 144
		&& task04(50) == 7'778'742'049
		&& task04(90) == 1'779'979'416'004'714'189LL
		&& task04(0) == -1
		&& task04(-9) == -1
		&& task04(-10) == -1
		&& task04(-99) == -1
		&& task04(-100) == -1;

	cout << "Task 04 [The Fibonacci Number]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask05() {
	bool result = task05(0) == 1
		&& task05(1) == 2	// 3
		&& task05(2) == 4
		&& task05(3) == 5
		&& task05(4) == -1
		&& task05(5) == 6
		&& task05(6) == -1
		&& task05(7) == -1
		&& task05(8) == 7
		&& task05(9) == -1
		&& task05(10) == -1
		&& task05(11) == -1
		&& task05(12) == -1
		&& task05(13) == 8
		&& task05(15) == -1
		&& task05(20) == -1
		&& task05(21) == 9
		&& task05(30) == -1
		&& task05(34) == 10
		&& task05(50) == -1
		&& task05(55) == 11
		&& task05(89) == 12
		&& task05(100) == -1
		&& task05(144) == 13
		&& task05(233) == 14
		&& task05(377) == 15
		&& task05(500) == -1
		&& task05(610) == 16
		&& task05(75'025) == 26
		&& task05(7'778'742'049) == 50
		&& task05(1'779'979'416'004'714'189LL) == 90
		&& task05(11) == -1
		&& task05(-55) == -1
		&& task05(-1) == -1;

	cout << "Task 05 [The Number of Fibonacci Number]" << (result ? RIGHT : WRONG) << endl;
}

void testingTask06() {
	bool result = task06(23232) == 2
		&& task06(1212110) == 2
		&& task06(0) == 0
		&& task06(15143120) == 3
		&& task06(12345) == 0
		&& task06(11111) == 0
		&& task06(1) == 0
		&& task06(-1) == 0
		&& task06(12) == 0
		&& task06(-21) == 0
		&& task06(123) == 0
		&& task06(-321) == 0
		&& task06(121) == 1
		&& task06(-12121) == 2
		&& task06(1212121) == 3
		&& task06(-2121212) == 2
		&& task06(12'345'678'987'654'321LL) == 1
		&& task06(-9'223'372'036'854'775'807LL) == 3
		&& task06(9'223'372'036'854'775'807LL) == 3;

	cout << "Task 06 [The Count of Local Maximus]" << (result ? RIGHT : WRONG) << endl;
}

void testingTaskX() {
	bool result = taskX(123456) == 1
		&& taskX(1234567789) == 2
		&& taskX(1122233335) == 4
		&& taskX(0) == 1
		&& taskX(-15) == 1
		&& taskX(-1234567789) == 2
		&& taskX(-1122233335) == 4
		&& taskX(1111122223333) == 5
		&& taskX(333344455551) == 4
		&& taskX(-11111) == 5
		&& taskX(12) == 1
		&& taskX(11122) == 3
		&& taskX(11222) == 3
		&& taskX(-55558799912) == 4
		&& taskX(5588899912222) == 4
		&& taskX(-22233222) == 3
		&& taskX(442555) == 3
		&& taskX(-9'222'372'333'354'777'807LL) == 4
		&& taskX(9'222'372'333'354'777'807LL) == 4;

	cout << "Task X [The Largest Sequence of Number Digits] " << (result ? RIGHT : WRONG) << endl;
}