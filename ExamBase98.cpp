#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "pt4exam.h"
using namespace std;

// Для ввода используйте поток cin
// Для вывода используйте поток cout
void Solve()
{
    Task("ExamBase98");
    string s, s1;
    getline(cin, s);
    int i = 0;
    while (s.find(" ") != -1)
    {
        i++;
         s.replace(s.find(" "), 1, to_string(i));
    }
    if (i > 0) {
        int n = s.size();
        for (int k = i; k > 0; k--)
        {
            int j = n - s.find(to_string(k));
            s1 += s.substr(s.find(to_string(k)), n - s.find(to_string(k)));
            s1.replace(s1.find(to_string(k)), 1, " ");
            n = s.find(to_string(k));
        }
        s1 += " " + s.substr(0, s.find("1"));
        s1.erase(0, 1);
        cout << s1;
    }
    else cout << s;
}
