/********************************************************
 * Author : Raz Marshanski
 * Date   :
 * Name   : charactersFunctions;
*******************************************************/
#include <iostream>
using namespace std;

int main()
{
    char c{};
    isalpha(c);// if c is a letter
    isalnum(c);// if c is a letter or digit
    isdigit(c);// if c is a digit
    islower(c);// if c is a lowercase letter
    isprint(c);// if c is a printable character
    ispunct(c);// if c is a punctuation character
    isupper(c);// if c is an uppercase letter
    isspace(c);// if c is whitespace

    tolower(c);// return a lower case of c
    toupper(c);// return a upper case of c


}