#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cassert>
using namespace std;
vector<int> map(std::vector<int> numbers, int (*func)(int)) {
    vector<int> result;
    for (int num : numbers) {
        result.push_back(func(num));
    }
    return result;
}

vector<int> filter(vector<int> numbers, bool (*func)(int)) {
    vector<int> result;
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
void test(vector<int> numbers){
  assert(!numbers.empty());
  assert(square(2) == 4);
  assert(is_even(2) == true);
}
