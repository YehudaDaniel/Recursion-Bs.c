#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Q7.h"

void Test1(unsigned long n1, unsigned long n2, int expected, int dec)
{
	int result = FindCommonDigit(n1, n2);

	if (result != expected)
	{
		printf("FindCommonDigit => Your Output is %d, Expected: %d (-%d)\n", result, expected, dec);
	}
}

void Test2(unsigned long n, int d, int expected, int dec)
{
	int result = CountDigit(n, d);

	if (result != expected)
	{
		printf("CountDigit => Your Output is %d, Expected: %d (-%d)\n", result, expected, dec);
	}
}

void Test3(unsigned long n, long expected, int dec)
{
	long result = GetReverse(n);

	if (result != expected)
	{
		printf("GetReverse => Your Output is %ld, Expected: %ld (-%d)\n", result, expected, dec);
	}
}

void Test4(char str[], int expected, int dec)
{
	int result = isPolindrom(str);

	if (result != expected)
	{
		printf("isPolindrom => Your Output is %d, Expected: %d (-%d)\n", result, expected, dec);
	}
}

//void Test5(char str[], char expected[], int dec)
//{
//	char* result = dupCapStringRec(str);
//
//	if (strcmp(result, expected) != 0)
//	{
//		printf("dupCapStringRec => Your Output is %s, Expected: %s (-%d)\n", result, expected, dec);
//	}
//}
//
//void Test6(int a[], int size, int expected, int dec)
//{
//	int result = isArrAsc(a, size);
//
//	if (result != expected)
//	{
//		printf("isArrAsc => Your Output is %d, Expected: %d (-%d)\n", result, expected, dec);
//	}
//}
//
//void Test7(int a[], int size, unsigned int k, int expected, int dec)
//{
//	int result = isSubsetSumExist(a, size, k);
//	if (result != expected)
//	{
//		printf("isSubsetSumExist => Your Output is %d, Expected: %d (-%d)\n", result, expected, dec);
//	}
//}
//
//void Test8(char board[][N], int expected, int dec)
//{
//	int result = isPathExist(board);
//	if (result != expected)
//	{
//		printf("isPathExist  => Your Output is %d, Expected: %d (-%d)\n", result, expected, dec);
//	}
//}


int main() {
	Test1(113557999, 22246688, -1, 4);
	Test1(1135577, 223446689, 3, 4);
	Test1(112233445, 112233445, 5, 4);

	Test2(128262123, 2, 4, 4);
	Test2(124312432, 7, 0, 4);
	Test2(11100111, 1, 6, 4);

	Test3(123456789, 987654321, 4);
	Test3(111222333, 333222111, 4);
	Test3(1234321, 1234321, 4);

	Test4("123321", 1, 4);
	Test4("abBba", 1, 4);
	Test4("abcd", 0, 4);

	//Test5("123321", "123321", 4);
	//Test5("abBba", "ABBBA", 4);
	//Test5("ab$cd", "AB$CD", 4);

	//int a[] = { 1,4,6,8 };
	//int b[] = { 1,2,-3,4,5 };
	//int c[] = { -5,-4, 1, 2,3 };
	//Test6(a, 4, 1, 4);
	//Test6(b, 5, 0, 4);
	//Test6(c, 5, 1, 4);

	//Test7(a, 4, 15, 1, 4);
	//Test7(b, 5, 9, 1, 4);
	//Test7(c, 5, 7, 0, 4);

	//char mat[N][N] = { "00111111000",
	//				"10110001000",
	//				"10010101000",
	//				"11000101000",
	//				"11111101010",
	//				"11111100010",
	//				"11111111110",
	//				"11000111110",
	//				"11110000000",
	//				"11111001111",
	//				"11111000000" };

	//char mat2[N][N] = {
	//	"01111111111",
	//	"10111111111",
	//	"11011111111",
	//	"11101111111",
	//	"11110111111",
	//	"11111011111",
	//	"11111101111",
	//	"11111110111",
	//	"11111111011",
	//	"11111111101",
	//	"11111111110" };

	//char mat3[N][N] = {
	//	"00111111111",
	//	"10011111111",
	//	"11001111111",
	//	"11100111111",
	//	"11110011111",
	//	"11111001111",
	//	"11111100111",
	//	"11111110011",
	//	"11111111001",
	//	"11111111100",
	//	"11111111110" };

	//Test8(mat, 1, 5);
	//Test8(mat2, 0, 5);
	//Test8(mat3, 1, 6);
	printf("\ndone");
	return 0;
}
