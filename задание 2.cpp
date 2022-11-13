#include <iostream>
#include<string>
#include <ctime>
#include <stdlib.h>
#include <windows.h>
using namespace std;

string randome(string s1)
{
    string Asciis, Asciis1;
    
    for (int i = 0; i < s1.size(); i++)
    {
        Asciis += " " + to_string(static_cast<int>(s1[i]));
    }
    Asciis.erase(0, 1);
    Asciis1 = Asciis;
    do
    {
        for (int i = 0; i < Asciis.size()-4; i+=4)
        {
            int rando = 0;
            do {
                srand(time(NULL));
                rando = rand() % Asciis.size();
            } while (Asciis[rando] != '-' );
            Asciis1.replace(i, 1, Asciis[rando], 1);
            Asciis1.replace(rando, 1, Asciis[i], 1);
        }
    } while (Asciis1 != Asciis);
    return Asciis1;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    string s;
    getline(cin, s);
    randome(s);
    
}

