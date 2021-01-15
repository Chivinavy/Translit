#include <iostream>
#include <cmath>
#include <windows.h>
#include "Function.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Введите текст (а..я): ";
    cin.getline(str, 500);
    cout << "Перевод: ";
    trans(str, eng, rus);
    delete[] str;
    return 0;
}
