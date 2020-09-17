#include "symbstring.hpp"
#include <ostream>
#include <string>

const Symbstring operator+(const Symbstring &f, const Symbstring &s)
{
    return Symbstring(f.str+s.str);
}

std::istream &operator>>(std::istream &in, Symbstring &s)
{

    std::string tmpStr;
    in >> tmpStr;
    s = Symbstring(tmpStr);    
    return in;
}

std::ostream &operator<<(std::ostream &out, const Symbstring &s)
{
    out << s.str;
    return out;
}


