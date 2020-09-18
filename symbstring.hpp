#pragma once
#include <istream>
#include <ostream>
#include <string>
#include <vector>

class Octstring;

class Symbstring
{
    protected:
        std::string str;
        std::string id;
    public:
        Symbstring() : Symbstring("", ""){};
        Symbstring(std::string m_str, std::string m_id) : str(m_str), id(m_id)
        {};
        virtual ~Symbstring() = default;
        //Symbstring(const Symbstring &s);
        friend const Symbstring operator+(const Symbstring&, const Symbstring&);
        friend std::istream &operator>>(std::istream &in, Symbstring &);
        friend std::ostream &operator<<(std::ostream &out, const Symbstring &);
        friend const Symbstring operator+(const Symbstring&, const Octstring&);
         
        friend std::string search(std::vector<Symbstring> &, std::string);
};

