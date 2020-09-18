#include "octstring.hpp"
#include "symbstring.hpp"
#include <istream>
#include <ostream>
#include <string>
#include <iostream>

Octstring::Octstring(int m_octnumb) : Symbstring("", ""), octnum(m_octnumb)
{
}

std::istream &operator>>(std::istream &in, Octstring &oc)
{
    
    in >> oc.id >> oc.octnum;
    
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

    out << std::oct <<oc.octnum;

    return out;
}


std::string searchoct(std::vector<Octstring> &oct, std::string str)

{
    for(int i = 0; i < oct.size(); i++)
    {
        if(str == oct[i].id)
        {
            return oct[i].str;            
        }
    }  
    return "No matches found";
}

