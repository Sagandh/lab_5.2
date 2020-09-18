#include "symbstring.hpp"
#include <ostream>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

const Symbstring operator+(const Symbstring &f, const Symbstring &s)
{
    return Symbstring(f.str + s.str, s.id);
}

std::istream &operator>>(std::istream &in, Symbstring &s)
{
    std::cout << "Enter the string and id \n";
    in >> s.id >> s.str;
    return in;
}

std::ostream &operator<<(std::ostream &out, const Symbstring &s)
{
    out << s.str;
    return out;
}


std::string search(std::vector<Symbstring> &v, std::string str)
{
    for(int i = 0; i < v.size(); i++)
    {
        if(str == v[i].id)
        {
            return v[i].str;            
        }
    }  
    return "No matches found";
}

