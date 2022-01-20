//Yehuda Daniel
//211789680

#include "Q7.h"

//--------------Side functions-------------------

//FOR TASK 1
/// <summary>
/// Function for checking if a one digit number is present in an integer, and returns -1 if not
/// </summary>
/// <param name="num">- a number</param>
/// <param name="x">- one digit number</param>
/// <returns></returns>
int linearSearch(unsigned long num, int x) {
    if (num > 0) {
        if (num%10 != x)
            return linearSearch(num/10, x);
        return x;
    }
    // We reach here when element is not
    // present in num
    return -1;
}

//FOR TASK 2
/// <summary>
/// check if the passed digit equals to the most right digit in the number given
/// </summary>
/// <param name="num">- a number</param>
/// <param name="x">- one digit number</param>
/// <returns></returns>
int SingleSearch(unsigned long num, int x) {
    if (num % 10 == x)
        return 1;
    return -1;
}

//FOR TASK 
//Takes a number and returns its length
int returnLength(unsigned long num) {
    if (num == 0)
        return 0;
    return 1 + returnLength(num / 10);
}
//Calculates the power of a number
int doPow(int num, int pow) {
    if (pow != 0)
        return (num * doPow(num, pow - 1));
    else
        return 1;
}


//------------------------------------------------



//This function recieves positive, greater than zero integers, sorted ascendingly from
//left to right.
//The function compare to numbers and returns the most right number they have in common, else itll return -1
int FindCommonDigit(unsigned long n1, unsigned long n2) {
    //A stopping condition for the recursion
    if (n1 > 0) {
        //checking if n2 shares a digit with the right digit of n1
        int result = linearSearch(n2, n1 % 10);
        if (result == -1)
            return FindCommonDigit(n1 / 10, n2);
        return result;
    }
    //we reach here if 
    //none of numbers share a common digit
    return -1;
}

//This function counts how many times a digit appear in a number
int CountDigit(unsigned long num, int digit) {
    //if num is 0 we reached the end of our recursion
    if (num == 0)
        return 0;
    //checking if a digit exist in a number
    int result = SingleSearch(num, digit);
    //if the digit exist in the number, return 1 plus the recursive function(going outside the recursion)
    if (result != -1)
        return 1 + CountDigit(num / 10, digit);
    return CountDigit(num / 10, digit);
}

//function recieves a number and returns it reveres
long GetReverse(unsigned long num) {
    //Find total digits in number
    int digits = (int)returnLength(num) - 1;
    //stopping condition
    if (num == 0)
        return 0;
    return (((num % 10) * pow(10, digits)) + GetReverse(num / 10));
}

int index = 0;
int isPolindrom(char str[]) {
    //if the array has only 1 character
    if (str[0] == str[strlen(str) - 1]) return 1;
    //if the first and the last characters do not match
    if (str[0] != str[strlen(str) - 1]) return 0;

    //if there are more than 2 chars in the array, run the function again
    if (strlen(str) != 0)
        return isPolindrom(str + 1);
    return 1;
}

//
//
//char* dupCapStringRec(char str[])
//{
//
//}
//
//
//int isArrAsc(int a[], int size)
//{
//
//}
//
//int isSubsetSumExist(int a[], int size, int k)
//{
//
//}
//int isPathExist(char board[][N])
//{
//
//}