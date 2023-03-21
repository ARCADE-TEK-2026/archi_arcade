#include <optional>
#include <tuple>
#include <iostream>

std::pair<bool, std::optional<int>> test_it(int a)
{
    if (a == 0) {
        return std::make_pair(false, std::nullopt);
    } else if (a == 1) {
        return std::make_pair(true, std::nullopt);
    } else {
        return std::make_pair(true, a);
    }
}

int main()
{
    bool a;
    std::optional<int> b;
    std::tie(a, b) = test_it(0);
    std::cout << a << " " << b.has_value() << " " << b.value_or(0) << std::endl;
    std::tie(a, b) = test_it(1);
    std::cout << a << " " << b.has_value() << " " << b.value_or(0) << std::endl;
    std::tie(a, b) = test_it(2);
    std::cout << a << " " << b.has_value() << " " << b.value_or(0) << std::endl;
}
