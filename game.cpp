#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cassert>

int getRandomNumber() {
    srand(time(0));
    return rand() % 100;
}

bool isEven(int number) {
    return number % 2 == 0;
}

void game() {
    int correctAnswers = 0;
    std::string name;
    std::cout << "Welcome to the Brain Games!" << std::endl;
    std::cout << "May I have your name? ";
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;
    std::cout << "Answer 'yes' if the number is even, otherwise answer 'no'." << std::endl;

    while (correctAnswers < 3) {
        int number = getRandomNumber();
        std::cout << "Question: " << number << std::endl;
        std::cout << "Your answer: ";
        std::string userAnswer;
        std::cin >> userAnswer;

        std::string correctAnswer = isEven(number) ? "yes" : "no";
        if (userAnswer != correctAnswer) {
            std::cout << "'" << userAnswer << "' is wrong answer ;(. Correct answer was '" << correctAnswer << "'." << std::endl;
            std::cout << "Let's try again, " << name << "!" << std::endl;
            correctAnswers = 0;
        }
        else {
            std::cout << "Correct!" << std::endl;
            correctAnswers++;
        }
    }

    std::cout << "Congratulations, " << name << "!" << std::endl;
}

void testIsEven() {
    assert(isEven(2) == true);
    assert(isEven(3) == false);
    assert(isEven(0) == true);
    assert(isEven(17) == false);
    std::cout << "Tests for isEven passed successfully!" << std::endl;
}

int main() {
    testIsEven();
    game();
    return 0;
}
