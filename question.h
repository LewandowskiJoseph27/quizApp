#ifndef QUESTION_H
#define QUESTION_H

#include <string>

class Question {
    public: 
        Question(const std::string& questionText, const std::string& answerText);
        void askQuestion() const;
        bool checkAnswer(const std::string& userAnswer) const;
        
    private:
        int number;
        std::string questionText;
        std::string answerText;
        bool asked;
};

class Choices {
    public:
        Choices(const std::vector<std::string>& choices);
        void displayChoices() const;
};

#endif // QUESTION_H