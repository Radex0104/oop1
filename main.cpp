#include<iostream>
#include<vector>
#include<cassert>

std::vector<int> map(std::vector<int> numbers, int (*func)(int)) {
    std::vector<int> result;
    for (int num : numbers) {
        result.push_back(func(num));
    }
    return result;
}

std::vector<int> filter(std::vector<int> numbers, bool (*func)(int)) {
    std::vector<int> result;
    for (int num : numbers) {
        if (func(num) == true)
        result.push_back(num);
    }
    return result;
}

int square(int x) {
    return x * x;
}

bool is_even(int number) {
    if (number % 2 == 0)
        return true;
    else
        return false;
}
assert(map({1,2,3,4,5},[] (int x) {x*x}) == {1,4,9,16,25});
assert(filter({1,2,3,4,5}, [] (int x) {if (number % 2 == 0)
        return true;
    else
        return false;})== {2,4})
assert(square(2) == 4);
assert(is_even(2) == true);
int main() {
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    auto results = map(numbers, square);
    auto results2 = filter(numbers, is_even);
}
