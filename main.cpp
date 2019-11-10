#include<iostream>
#include"example.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a, b;
    cout << "Enter two positive numbers: ";
    cin >> a >> b;

    cout << "NOD = " << gsd_one(a, b) << endl;
    cout << "NOD = " << gsd_two(a, b) << endl;

    cout << "NOK = " << lkm_one(a, b) << endl;
    cout << "NOK = " << lkm_two(a, b) << endl;

//////////////////////////////////////////////////////////
    int n;
    bool flag;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "Number of digits of a number: " << number_digits_number(n) << endl;
    cout << "Inverse number " << calculating_inverse_number(n) << endl;

    flag = finding_palindrome(n);
    if(flag == true)
    {
        cout << n << " - the palindrome." << endl;
    }
    else
        cout << n << " - is not palindrome." << endl;

//////////////////////////////////////////////////////////

    int x;
    bool isAnswer;

    cout << "Enter an integer: ";
    cin >> x;

    isAnswer = finding_prime_number(x);

    if(isAnswer)
        cout << x << " - it's a Prime number." << endl;
    else
        cout << x << " - it's not a Prime number." << endl;



//////////////////////////////////////////////////////////

    int low, high, i, fl, tmp;

    cout << "Print the Prime numbers between A and B." << endl;
    cout << "Enter a value for A and B: ";
    cin >> low >> high;

    if(low > high)
    {
        tmp = low;
        low = high;
        high = tmp;
    }

    while(low < high)
    {
        fl = 0;

        for(i = 2; i <= low / 2; ++i)
        {
            if(low % i == 0)
            {
                fl = 1;
                break;
            }
        }
        if(fl == 0)
            cout << low << " ";
        ++low;
    }
    cout << endl;
//////////////////////////////////////////////////////////

    int k, j;
    bool opt = false;

    cout << "Enter an integer: ";
    cin >> k;

    for(j = 2; j <= k / 2; ++j)
    {
        if(finding_prime_number(j))
        {
            if(finding_prime_number(k - j))
            {
                cout << k << " = " << j << " + " << k - j << endl;
                opt = true;
            }
        }
    }
    if(!opt)
        cout << k << " - Cannot be expressed as the sum of two primes." << endl;

 /////////////////////////////////////////////////////////////

    int f;
    cout << "Enter positive a number: ";
    cin >> f;

    cout << "Factorial " << f << " = " << fact(f) << endl;

    return 0;
}
