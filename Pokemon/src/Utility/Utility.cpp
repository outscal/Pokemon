#include "../../include/Utility/Utility.hpp"
#include <iostream>
#include <limits>

namespace N_Utility {

void Utility::clearConsole() {
#ifdef _WIN32
  std::system("cls");
#else
  (void)std::system("clear");
#endif
}

void Utility::waitForEnter() { std::cin.get(); }

void Utility::clearInputBuffer() {
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

} // namespace Utility