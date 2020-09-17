#pragma once
#include <istream>
#include <ostream>
#include <string>

class Octstring;

class Symbstring
{
    protected:
        std::string str;
    public:
        Symbstring() : Symbstring(""){};
        Symbstring(std::string m_str) : str(m_str)
        {};
        virtual ~Symbstring() = default;
        Symbstring(const Symbstring &s);
        friend const Symbstring operator+(const Symbstring&, const Symbstring&);
        friend std::istream &operator>>(std::istream &in, Symbstring &);
        friend std::ostream &operator<<(std::ostream &out, const Symbstring &);
        friend const Symbstring operator+(const Symbstring&, const Octstring&);
};
