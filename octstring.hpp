#pragma once
#include "symbstring.hpp"
#include <ostream>

class Octstring : public Symbstring
{
    protected:
        int octnum;
    public:
        Octstring() : Symbstring(){};
        Octstring(int num);
        virtual ~Octstring() = default;

        friend std::istream &operator>>(std::istream &in, Octstring &oc);
        friend const Symbstring operator+(const Symbstring&, const Octstring&);
        friend std::ostream & operator<<(std::ostream &out, const Octstring &oc);
};
