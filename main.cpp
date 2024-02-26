#include<iostream>
#include<vector>
#include<cassert>
using namespace std;

std::vector<int> map(std::vector<int> numbers, int (*func)(int)) {
    std::vector<int> result;
    assert(!numbers.empty());
    for (int num : numbers) {
        result.push_back(func(num));
    }
    return result;
}

std::vector<int> filter(vector<int> numbers, bool (*func)(int)) {
    std::vector<int> result;
    assert(!numbers.empty());
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

void test()
{
    assert(square(2) == 4);
    assert(is_even(2) == true);
}
int main() {
    
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    test();
    auto results = map(numbers, square);
    for(auto num : results)
        cout << num << " ";
    cout << endl;
    auto results2 = filter(numbers, is_even);
    for (auto nums : results2)
        cout << nums << " ";
    cout << endl;
    system("pause");
    return 0;
}
