#include <vector>
#include <iostream>
int main() {
    std::vector v = {1,2,3,4,5};
    for (int i=0; i<5; i++)
        std::cout << v[i] << ' ';
    return 0;
}