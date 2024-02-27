#include<main.h>
using namespace std;

std::vector<int> map(std::vector<int> numbers, int (*func)(int)) {
    std::vector<int> result;
    for (int num : numbers) {
        result.push_back(func(num));
    }
    return result;
}

std::vector<int> filter(vector<int> numbers, bool (*func)(int)) {
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

int main() {
    
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    test(numbers);
    auto results = map(numbers, square);
    for(auto num : results)
        cout << num << " ";
    cout << endl;
    auto results2 = filter(numbers, is_even);
    for (auto nums : results2)
        cout << nums << " ";
    cout << endl;
    return 0;
}
