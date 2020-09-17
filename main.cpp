#include "symbstring.hpp"
#include "octstring.hpp"
#include <csetjmp>
#include <iostream>



int main()
{
    Symbstring s1;
    Symbstring s2;
    Octstring oc1;
    std::cout << "Enter the values of symbol 1 and symbol 2 and 3\n";
    std::cin >> s1 >> s2 >> oc1;
    std::cout << std::endl;
    std::cout <<"S1 = " <<s1 << "S2 = " << s2 << "\t oc1 = " << oc1 << std::endl; 
    s1 = s1 + oc1;
    
    std::cout << s1;


    return 0;
}
