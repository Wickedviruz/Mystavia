#include <iostream>

int main() {
    std::cout << "Hello from Mystavia client!" << std::endl;

    for (int i = 0; i < 5; ++i){
        std::cout << "Client loop interation: " << i << std::endl;
    }

    std::cout << "Press enter to exit...";
    std::cin.get();

    return 0;
}