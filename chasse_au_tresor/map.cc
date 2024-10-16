#include <iostream>
#include "map.h"



void ShowMap(const std::array<char, kRowSize * kColSize>& map_to_show)
{
	std::cout << '\t';
	for (char letter = 'A'; letter < 'A' + kColSize; letter++)
	{
		std::cout << letter << '\t';
	}
	std::cout << '\n';
	std::cout << '\n';

	for (int num_row = 0; num_row < kRowSize; num_row++)
	{
		std::cout << num_row + 1 << '\t';
		for (int num_col = 0; num_col < kColSize; num_col++)
		{
			int idx = num_row * kColSize + num_col;
			std::cout << map_to_show[idx] << '\t';
		}
		//fin de ligne

		std::cout << "\n\n";

	}
}

int convert_to_index(char x, int y)
{
	int Col = x - 'A';

	int Row = y - 1;

	return Row * kColSize + Col;

}

bool DigInTheMap(char x, int y)
{
	if(x < 'A' || x >= 'A' + kRowSize)
	{
		return false;
	}

	if(y < 1 || y >= 1 + kColSize)
	{
		return false;
	}

	return true;
}

