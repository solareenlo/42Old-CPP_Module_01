#include <iostream>

#include "Karen.hpp"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Usage: ./karenFilter <level>" << std::endl;
        return 1;
    }

    Karen karen;
    karen.complain(std::string(argv[1]));
    return 0;
}
