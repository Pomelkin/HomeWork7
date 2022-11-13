#include "pt4.h"
#include <string>
using namespace std;

void Solve()
{
    Task("str40");
    string s, Otvet;
    pt >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];
        int count = 0;
        
        for (int j = 0; j < s.size(); j++)
        {
            if (c == s[j]) count += 1;
        }
        
        if (count == 1)
        {
            Otvet.append(1,s[i]);
        }
    }
   pt<<Otvet;
}
