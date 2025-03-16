#include <iostream>
#include <iomanip>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    for (int i = 0; i <= 1'000'000'000; ++i) {
        std::cout << std::setw(10) << std::setfill('0') << i << '\n';
    }

    return 0;
}

