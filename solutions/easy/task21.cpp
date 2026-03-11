#include <iostream>
#include <string>
#include <list>
using namespace std;
std::vector<std::string> cordinatesperbox(int x, int y);


int main () {
    int x, y;
    cin >> x >> y;
    std::cout << x * y << endl;
    std::vector<std::string> list = cordinatesperbox(x, y);

    for (size_t i = 0; i < list.size(); i++)
    {
        std::cout << list[i]; if (i != list.size() - 1) std::cout << ", ";
    }
    return 0;
}

std::vector<std::string> cordinatesperbox(int x, int y)
{
    std::vector<std::string> l;
    for (int i = 1; i <= x; i++) {
        std::string comb = std::to_string(i) + ":";
        for (int j = 1; j <= y; j++) {
            std::string comb_b = comb + std::to_string(j);
            l.push_back(comb_b);
        }
    }
    return l;
}