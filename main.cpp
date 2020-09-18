#include "symbstring.hpp"
#include "octstring.hpp"
#include <algorithm>
#include <csetjmp>
#include <iostream>
#include <vector>


void show(std::vector<Symbstring> &s, std::vector<Octstring> &oc);

int main()
{
    
    std::vector<Symbstring> systring;
    std::vector<Octstring> octstring;
    Symbstring s1;
    Octstring oc1;
    char key;
    while(key != 'q')
    {
        std::cout << "1: add new symbstring\t"
            << "2: show all symbstring\t"
            << "3: sum symb and oct\t"
            << "4: add new octstring\t"
            << "5: show all octstring\t\n"
            << "q: exit\n";
        std::cin >> key;
        switch(key)
        {
            case '1':
                std::cin >> s1;
                systring.push_back(s1);
                system("clear");
                break;
            case '2':
                for(int i = 0; i < systring.size(); i ++)
                {
                    std::cout << " " << systring[i];
                }
                break;
            case '3':
                {
                std::cin >> oc1;
                octstring.push_back(oc1);
                break;
                }
            case '4':
                for(int i = 0; i < octstring.size(); i++)
                {
                    std::cout << octstring[i];
                }
                break;
            case '5':
                for(int i = 0; i < systring.size(); i++)
                {

                }
                systring[0] = systring[0] + octstring[0];
                std::cout << systring[0] << std::endl;
            case '6':
                {
                    show(systring, octstring);
                }
        }     
    }

    return 0;
}



void show(std::vector<Symbstring> &s, std::vector<Octstring> &oc)
{
   system("clear");
   int tmp;
   std::cout << "Choose the id number of symbstring: 1: symb + symb\n 2: oct + oct\n 3: symb + oct\n";
   std::cin >> tmp;
   switch(tmp)
   {
       case 1: {
           std::cout << "Enter the ID symb\n";
           std::string tmp_id;
           std::cin >> tmp_id;
           std::string tmp_finale1 = search(s, tmp_id);
               
           std::cout << "Enter the ID symb\n";
           std::cin >> tmp_id;
           std::string tmp_finale2 = search(s, tmp_id);
           std::string sumsymb = tmp_finale1 + tmp_finale2;
           std::cout << sumsymb;
               }
           break;
        case 2:
           {
           std::cout << "Enter the ID octsymb\n";
           std::string tmp_id;
           std::cin >> tmp_id;
           std::string tmp_finale1 = searchoct(oc, tmp_id);
               
           std::cout << "Enter the ID octsymb\n";
           std::cin >> tmp_id;
           std::string tmp_finale2 = searchoct(oc, tmp_id);
           std::string octsymb = tmp_finale1 + tmp_finale2;
           std::cout << "octsymb =  " <<octsymb << "\n";
           break;
           }

   }
}
