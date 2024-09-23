#include <array>
#include <iostream>
#include <ctime>

#include "map.h"

int main()
{
	std::srand(time(0));
	static std::array<char, kRowSize * kColSize> map;
	map.fill('x');
	int Tidx = rand() % (kRowSize * kColSize);
	map[Tidx];
	ShowMap(map);
	char xPlayer = 'A';
	int yPlayer = 1;

	int Pidx = 0;

	for(int Round_left = 1; Round_left < 5; Round_left++)
	{
		std::cout << "enter a letter between A and E " << std::endl;
		std::cin >> xPlayer >> yPlayer;
		//std::cout << "enter a number between 1 and 4 " << std::endl;
		//std::cin >> yPlayer;
		int Pidx = convert_to_index(xPlayer, yPlayer);

		if (Pidx == Tidx)
		{
			std::cout << "you won" << std::endl;
			break;
		}
		else
		{
			std::cout << "wrong answer" << std::endl;
			map[Pidx] = '&';
			
			ShowMap(map);
		}

		
	}
	
	std::cout << "___________________________________" << std::endl;
	map[Tidx] = '$';
	ShowMap(map);
	
	return 0;
}




