#ifndef MAP_H
#define MAP_H
#include <iostream>
#include <array>

//struct position
//{
//	int x, y;
//
//	void afficher()
//	{
//		std::cout << "abscisse : " <<  x <<  " " << "ordonnee : " << y << std::endl;
//	}
//
//};

//void GameBasic();
constexpr size_t kRowSize = 3;
constexpr size_t kColSize = 2;

int convert_to_index(char x, int y);

void ShowMap(const std::array<char, kRowSize* kColSize>& map_to_show);

//int SetTreasure();
#endif
 
