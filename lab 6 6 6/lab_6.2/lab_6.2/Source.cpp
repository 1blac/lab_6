#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
double midArf(int* a, const int size)
{
    double S = 0;
    double count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 != 0)
        {
            S += a[i];
            count++;
        }
    }
    cout << S << " " << count << endl;
    return S / count;
}

int main()
{
    srand((unsigned)time(NULL));
    int const n = 20;
    int Low = -20;
    int High = 25;
    int a[n];
    Create(a, n, Low, High);
    Print(a, n);
    midArf(a, n);
    cout << "serednie arifmetichiskoe = " << midArf(a, n) << endl;
    return 0;
}