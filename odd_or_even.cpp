#include <iostream>

int main() {
    int n1;
    int n2;
    int ans;

    std::cout << "Enter a number: ";
    std::cin >> n1;

    std::cout << "Enter a second number: ";
    std::cin >> n2;

    ans = n1 + n2;

    std::cout << "Adding " << n1 << " and " << n2 << " = " << ans << "!\n";
    return 0;
}