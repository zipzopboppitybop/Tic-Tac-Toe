#include <iostream>
#include <string>

int main()
{
    std::string input;
    bool goodRead = false;
    int num;

    std::cout << "Choose Heads or Tails to see who's going first!\n";
    std::cout << "1) Heads\n2) Tails\n";
    
    while (!goodRead || num > 2 || num < 1)
    {
        try
        {
            std::cout << "Choice: ";
            getline(std::cin, input);
            num = stoi(input);
            goodRead = true;
        }
        catch (...)
        {
            goodRead = false;
        }
    }

    std::cout << num;
}

