#include "pt4.h"
#include <string>
using namespace std;

void Solve()
{
    Task("str17");
    string s; 
    pt >> s;

    while (s.find('/') != -1)
    {
        s.replace(s.find('/'), 1, "\\");
    }
    pt << s;

}
 