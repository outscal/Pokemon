#include <iostream>
#include <string>
using std::string;

int main() {

    std::cout << "Welcome to the wonderous world of Pokemon, young trainer." << "\n"
        << "By what name should I address you?" << "\n" << std::endl;
    string trainerName;
    std::cin >> trainerName;
    std::cout << "Congratulations " << trainerName << ", now you are almost ready for adventure!\n" << std::endl;
}
