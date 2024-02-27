#include"main.h"

int main() {
    
    vector<int> numbers = { 1, 2, 3, 4, 5 };
    n1::test(numbers);
    auto results = n1::map(numbers, square);
    for(auto num : results)
        cout << num << " ";
    cout << endl;
    auto results2 = n1::filter(numbers, is_even);
    for (auto nums : results2)
        cout << nums << " ";
    cout << endl;
    n2::testIsEven();
    n2::game();
    return 0;
}
