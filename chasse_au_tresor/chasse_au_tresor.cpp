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

	for(int Round_left = 0; Round_left < 5; Round_left++)
	{
		std::cout << "enter the coordinates that you want to dig (example : A1) " << std::endl;
		std::cin >> xPlayer >> yPlayer;
		int Pidx = convert_to_index(xPlayer, yPlayer);
		

		
		
		if (Pidx == Tidx)
		{
			std::cout << "you won" << std::endl;
			break;
		}
		else if(!DigInTheMap(xPlayer, yPlayer))
		{
			std::cout << "you can't dig outside the map" << std::endl;
		}
		else if(map[Pidx] == '&')
		{
			std::cout << "you already dug here" << std::endl;
		}
		else
		{
			std::cout << "wrong answer" << std::endl;
			map[Pidx] = '&';
			
			ShowMap(map);
		}

		
	}
	std::cout << '\n';
	std::cout << "___________________________________" << std::endl;
	map[Tidx] = '$';
	std::cout << '\n';
	ShowMap(map);
	
	return 0;
}




