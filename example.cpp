#include<iostream>
#include"example.h"

using std::cout;
using std::cin;
using std::endl;

/////////////////////////////////////////
int gsd_one(int a, int b)
{
    int n;
    if(b > a)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }

    for(int i = 1; i <= b; ++i)
    {
        if(a % i == 0 && b % i == 0)
        {
            n = i;
        }
    }
    return n;
}
/////////////////////////////////////////
int gsd_two(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}
/////////////////////////////////////////
int lkm_one(int a, int b)
{
    int lkm = (a > b) ? a : b;
    while(1)
    {
        if(lkm % a == 0 && lkm % b == 0)
        {
            return lkm;
            break;
        }
        ++lkm;
    }
}
/////////////////////////////////////////
int lkm_two(int a, int b)
{
    int n, lkm, tmp;
    n = a;
    tmp = b;

    while(n != tmp)
    {
        if(n > tmp)
            n -= tmp;
        else
            tmp -= n;
    }

    lkm = (a * b) / n;
    return lkm;
}
/////////////////////////////////////////
int number_digits_number(int n)
{
    int count = 0;
    while(n != 0)
    {
        n /= 10;
        ++count;
    }
    return count;
}
/////////////////////////////////////////
int calculating_inverse_number(int n)
{
    int reverseNumber = 0, remainder;

    while(n != 0)
    {
        remainder = n % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        n /= 10;
    }

    return reverseNumber;
}
/////////////////////////////////////////
bool finding_palindrome(int n)
{
    bool flag;
    int original, reversed = 0, remainder;

    original = n;

    while( n != 0)
    {
        remainder = n % 10;
        reversed = reversed = reversed * 10 + remainder;
        n /= 10;
    }

    if(original == reversed)
        flag = true;
    else
        flag = false;
    return flag;
}
/////////////////////////////////////////
bool finding_prime_number(int n)
{
    bool isPrime = true;

    for(int i = 2; i <= n / 2; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}
/////////////////////////////////////////
int fact(int n)
{
    if(n > 1)
        return n * fact(n - 1);
    else
        return 1;
}
/////////////////////////////////////////

