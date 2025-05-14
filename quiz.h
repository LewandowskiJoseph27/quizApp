#ifndef QUIZ_H
#define QUIZ_H

#include <string>
#include <vector>

class Quiz {
    public: 
        Quiz(const std::string& quizName, const std::vector<std::string>& questions);
        void startQuiz() const;
        void displayResults() const;

        private:
        std::string quizName;
        std::vector<std::string> questions;
};

class user {
    public: 
        user(const std::string& name, int score);
        void addPoints(int points);
        void displayScore() const;
}


#endif // QUIZ_H