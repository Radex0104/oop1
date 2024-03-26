#include"main.h"

int main() {

    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    function::test(numbers);
    auto results = function::map(numbers, function::square);
    for (auto num : results)
        std::cout << num << " ";
    std::cout << std::endl;
    auto results2 = function::filter(numbers, function::is_even);
    for (auto nums : results2)
        std::cout << nums << " ";
    std::cout << std::endl;
    game::testIsEven();
    return 0;
}
