#include <iostream>
#include <string>

int main()
{
    long long v,t;
    std::cin >> v >> t;
    long long s = (v * t) % 109;
    std::cout << s;
    return 0;
}
