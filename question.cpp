#include "question.h"

Question::Question(const std::string& questionText, const std::string& answerText) : 
    questionText(questionText), answerText(answerText), asked(false) {}

void Question::askQuestion() const
{
    std::cout << questionText << std::endl;
}

bool checkAnswer(const std::string& userAnswer) const;