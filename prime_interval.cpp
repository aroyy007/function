#include <bits/stdc++.h>
using namespace std;

void listPrimeNumbers(int lower, int upper);

int main() {
    int upper, lower;
    cout<<"Enter the upper and lower limit: ";
    cin >> lower >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are:" << endl;
    listPrimeNumbers(lower,upper);

    return 0;
}

void listPrimeNumbers(int lower, int upper) 
{
    bool isPrime;

    for (int num = lower; num <= upper; num++) 
    {
        isPrime = true;

        if (num <= 1) 
        {
            isPrime = false;
        }

        for (int i = 2; i * i <= num; i++) 
        {
            if (num % i == 0) 
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime) 
        {
            cout << num << " ";
        }
    }

    cout << endl;
}
