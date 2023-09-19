#include <iostream>

void turnPlayer(gf) {
  int ceil_x, ceil_y;
  while (gf[ceil_x][ceil_y] != " ") {
    std::cout << "Введите номер клетки для хода";
    std::cin >> ceil_x, ceil_y;
  }
  gf[ceil_x][ceil_y] = "X";
  std::cout << "Значения приняты, Вы сделали ход";
}
