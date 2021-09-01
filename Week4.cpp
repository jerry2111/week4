
#include <iostream>

using namespace std;

/*void factorial(int in, unsigned long long sum)
{
    sum = sum * in;
    if (in != 1)
        factorial(in - 1, sum);
    else
        cout << sum;
}*/


void factorial(int in, unsigned long long sum)
{
    for (int a=1;a<=in;a++)
    {
        sum = sum * a;
    }
    cout << sum;
}



int main()
{
    int in;
    unsigned long long sum = 1;
    cin >> in;
    factorial(in,sum);
}

