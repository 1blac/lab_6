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
int Min(int* a, const int size)
{
    int min = a[0];
    for (int i = 1; i < size; i++)
        if (abs(a[i]) < min)
            min = abs(a[i]);
    return min;
}

 int Sum(int* a,const int size)
{
     int sum = 0;
    for (int k = 0; k < size; k++)
    {
        if (a[k] == 0) 
        {
            for (int f = k + 1; f < size; f++)
            {
                sum += a[f];
            }
            cout << "index = " << k << endl;
            break;
        }
    }
    return sum;
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
    cout << "min = " << Min(a, n) << endl;
    cout << "Sum = " << Sum(a, n) << endl;
    return 0;
}