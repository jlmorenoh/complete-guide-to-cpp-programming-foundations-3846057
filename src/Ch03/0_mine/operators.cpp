#include <iostream>

int main() {
    int x = 10, y = 20;
    int dx = 3, dy = 4;
    x += dx * 2;
    y += dy * 2;
    std::cout << "Player Position: (" << x << ", " << y << ")" << std::endl;
    return 0;
}