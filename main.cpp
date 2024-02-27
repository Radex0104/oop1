#include<main.h>

int main() {
    
    vector<int> numbers = { 1, 2, 3, 4, 5 };
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
