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
int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
    {
        if (a[i] > 0)
        S += a[i];
    }
	return S;
    
}

int main()
{
    srand((unsigned)time(NULL));
    int const n = 25;
    int Low = -20;
    int High = 30;
    int a[n];
    Create(a, n, Low, High);
    Print(a, n);
    Sum(a, n);
    cout << "sum=" << Sum(a, n) << endl;
    return 0;
}