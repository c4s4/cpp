#include <exception>
#include <iostream>

void maTerminate() {
    std::cout << "Dans ce cas, c\'est grave !" << std::endl;
}

int main() {
    std::set_terminate(maTerminate);  // On fournit sa propre fonction
    std::terminate();                 // Et on termine le programme.
    return 0;
}
