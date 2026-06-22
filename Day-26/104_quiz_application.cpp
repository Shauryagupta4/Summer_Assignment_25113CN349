#include <iostream>
#include <string>

int main() {
    std::string questions[] = {
        "1. What is the correct operator to compare two values in C++?",
        "2. Which data type is used to store text in C++?",
        "3. How do you insert a single-line comment in C++ code?",
        "4. Which loop is guaranteed to execute at least once?"
    };

    std::string options[][4] = {
        {"A. =", "B. ==", "C. EQUAL", "D. <>"},
        {"A. string", "B. char", "C. txt", "D. int"},
        {"A. #", "B. /*", "C. //", "D. --"},
        {"A. for", "B. while", "C. do-while", "D. none"}
    };

    char answerKey[] = {'B', 'A', 'C', 'C'};

    int totalQuestions = 4;
    int score = 0;
    char guess;

    std::cout << "========================================="<<std::endl;
    std::cout << "       WELCOME TO THE C++ QUIZ GAME      "<<std::endl;
    std::cout << "========================================="<<std::endl<<std::endl;

    for (int i = 0; i < totalQuestions; i++) {
        std::cout << questions[i] << std::endl;

        for (int j = 0; j < 4; j++) {
            std::cout << "\t" << options[i][j] << std::endl;
        }

        std::cout << "Your answer (A, B, C, or D): ";
        std::cin >> guess;
        
        if (guess >= 'a' && guess <= 'z') {
            guess = guess - 32; 
        }

        if (guess == answerKey[i]) {
            std::cout << "--> Correct!"<<std::endl<<std::endl;
            score++;
        } 
        else {
            std::cout << "--> Wrong answer. The correct option was " << answerKey[i] << std::endl << std::endl;
        }
    }

    double percentage = (double(score)/double(totalQuestions)) * 100;

    std::cout << "========================================="<<std::endl;
    std::cout << "                 RESULTS                 "<<std::endl;
    std::cout << "========================================="<<std::endl;
    std::cout << "Total Questions: " << totalQuestions << std::endl;
    std::cout << "Correct Answers: " << score << std::endl;
    std::cout << "Final Score    : " << percentage << "%"<<std::endl;
    std::cout << "========================================="<<std::endl;

    return 0;
}
