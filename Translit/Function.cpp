#include <iostream>
using namespace std;


void trans(const char* str, const char* eng, const char* rus) {
    short i = 0, k, n;
    bool Check;

    while (str[i] != '\0') 
    {
        if (str[i] == ' ') {
            cout << ' ';
            i += 1;
        }
        else {
            Check = true;
            k = 0;
            n = 1;
            while ((Check == true) && (rus[k] != '.')) {
                if (str[i] == rus[k]) 
                {
                    cout << eng[k];
                    Check = false;
                    while (rus[k + n] == '*') 
                    { 
                        cout << eng[k + n]; 
                        n++;
                    }
                }
                if (rus[k + 1] == '*')
                {
                    k += 2;
                }
                else 
                {
                    k += 1;
                }
            }
            i += 1;
        }
    }
}