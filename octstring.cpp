#include "octstring.hpp"
#include "symbstring.hpp"
#include <istream>
#include <ostream>
#include <string>

Octstring::Octstring(int m_octnumb) : Symbstring("", ""), octnum(m_octnumb)
{
    do
    {
            str = static_cast<char>(octnum % 8) + str;
            octnum /= 8;

    }while(octnum > 0);
}

std::istream &operator>>(std::istream &in, Octstring &oc)
{
    
    in >> oc.octnum;
    
    return in;
}

const Symbstring operator+(const Symbstring &f, const Octstring &s)
{
    return Symbstring(f.str + std::to_string(s.octnum), s.id);
}

const Octstring operator+(const Octstring &f, const Octstring &s)
{
    return Octstring(f.octnum + s.octnum);
}

std::ostream &operator<<(std::ostream &out, const Octstring &oc)
{

    out << oc.octnum << ", ";

    return out;
}
