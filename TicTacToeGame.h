#pragma once
#include <vector>
#include <string>


class TicTacToeGame
{
private:
    std::vector<std::string> mGrid;

public:
    TicTacToeGame() : mGrid(std::vector<std::string>(9, " ")) {}

    std::vector<std::string> grid() const;
    std::string element(int num) const;
    void grid(std::vector<std::string> newGrid);
    void element(int num, std::string newElement);
    void PlayGame();
};

