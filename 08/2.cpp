#include <vector>
#include <iostream>
int main() {
   std::vector<int> v(5);
   for (int x:v)
     std::cout << x << ' ';
   return 0;
}