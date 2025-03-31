#include "TicTacToeGame.h"
#include <iostream>

std::vector<std::string> TicTacToeGame::grid() const
{
	return mGrid;
}

void TicTacToeGame::grid(std::vector<std::string> newGrid)
{
	mGrid = newGrid;
}

std::string TicTacToeGame::element(int num) const
{
	return mGrid[num];
}

void TicTacToeGame::element(int num, std::string newElement)
{
	mGrid[num] = newElement;
}

void TicTacToeGame::PlayGame()
{
	std::vector<std::string> newGrid = { "1", "2", "3", "4", "5", "6", "7", "8", "9" };
	grid(newGrid);

	for (int i = 1; i < mGrid.size() + 1; i++)
	{
		std::string element = mGrid[i - 1];

		if (i % 3 == 0)
		{
			std::cout << " " << element << "" << "\n" << "_ _ _ _ _ _ \n\n";
		}
		else
		{
			std::cout << " " << element << " |";
		}
	}
}

