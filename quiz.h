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
}


#endif // QUIZ_H