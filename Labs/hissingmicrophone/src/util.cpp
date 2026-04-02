#include "util.hpp"
#include <string>

using namespace std;

string answer(const string &line)
{
    // FIXED - implement algorithm step 2; return "hiss" or "no hiss"
    if (line.find ("ss") == string::npos)
        {
            return "no hiss";
        }
    else
        {
        return "hiss";
        }
}