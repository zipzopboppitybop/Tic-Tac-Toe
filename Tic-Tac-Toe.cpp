#include <iostream>
#include <string>
#include <memory>
#include "TicTacToeGame.h"


static bool isReadGood(std::string input, int& num)
{
    bool result = false;

    try
    {
        num = stoi(input);
        result = true;
    }
    catch (...)
    {
        result = false;
    }

    return result;
}

int main()
{
    TicTacToeGame bruh;
    srand((unsigned int)time(NULL)); //seed the random # generator
    std::string input = "";
    bool goodRead = false;
    int num = 0;
    int randomNum = rand() % 2;

    std::cout << "Choose Heads or Tails to see who's going first!\n";
    std::cout << "1) Heads\n2) Tails\n";
    
    while (!goodRead || num > 2 || num < 1)
    {
        std::cout << "Choice: ";
        getline(std::cin, input);
        goodRead = isReadGood(input, num);
    }
    
    std::cout << "\n";

    bruh.PlayGame();

    return 0;
}

