
// Q&A program that asks the user a series of questions and stores their answers.

#include <array>
#include <iostream>

struct QA {
    // Structure to hold a question and its answer
    std::string question;
    bool y_n;
};

bool answer(const std::string& question) {
    // Function to get a yes/no answer from the user
    std::cout << question << std::endl;
    char y_n;
    std::cin >> y_n;
    if (y_n == 'y' || y_n == 'Y') {
        return true;
    } else if (y_n == 'n' || y_n == 'N') {
        return false;
    } else {
        std::cout << "Invalid input. Please enter 'y' or 'n'." << std::endl;
        return answer(question);
    }
}

int main() {
    std::array<QA, 3> user_qa = {QA{"Are you a human?", false}, QA{"Are you alive?", false},
                                 QA{"Are you a programmer?", false}};

    for (QA& element : user_qa) {
        element.y_n = answer(element.question);
    }

    for (const QA& element : user_qa) {
        std::cout << "Question: " << element.question
                  << ", Answer: " << (element.y_n ? "Yes" : "No") << std::endl;
    }

    return 0;
}
