#ifndef MAP_H
#define MAP_H
#include <iostream>
#include <array>

constexpr size_t kRowSize = 3;
constexpr size_t kColSize = 3;

int convert_to_index(char x, int y);

void ShowMap(const std::array<char, kRowSize* kColSize>& map_to_show);
#endif
 
bool DigInTheMap(char x, int y);