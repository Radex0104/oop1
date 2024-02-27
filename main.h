#include<iostream>
#include<vector>
#include<cassert>
void test(std::vector<int> numbers){
  assert(!numbers.empty());
  assert(square(2) == 4);
  assert(is_even(2) == true);
}
