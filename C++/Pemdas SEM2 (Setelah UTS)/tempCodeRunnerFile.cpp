#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>
using namespace std;

// Structure to hold a question and its answers
struct Question {
    string question;
    vector<pair<string, int>> answers; // answer and score

    // Function to display the question
    void displayQuestion() const {
        cout << question << endl;
    }

    // Function to check if a given answer is correct
    bool checkAnswer(const string& userAnswer, int& score, unordered_set<string>& guessedAnswers) const {
        for (const auto& answer : answers) {
            if (answer.first == userAnswer && guessedAnswers.find(userAnswer) == guessedAnswers.end()) {
                score += answer.second;
                guessedAnswers.insert(userAnswer);
                return true;
            }
        }
        return false;
    }

    // Function to display all possible answers
    void displayAllAnswers() const {
        cout << "\nTop List jawaban: " << endl;
        for (const auto& answer : answers) {
            cout << "-" << answer.first << " (" << answer.second << " point)" << endl;
        }

        cout << "\nKlik enter untuk melanjutkan\n";
        cin.ignore();
        cin.get();
    }

    // Function to display guessed answers
    void displayGuessedAnswers(const unordered_set<string>& guessedAnswers) const {
        cout << "\nGuessed Answers:\n";
        for (const auto& answer : answers) {
            if (guessedAnswers.find(answer.first) != guessedAnswers.end()) {
                cout << answer.first << " (" << answer.second << " point) \n";
            } else {
                cout << "- ???\n";
            }
        }
        cout << endl;
    }
};

// Function to play one round of the game
void playRound(const Question& question) {
    int score = 0;
    int attempts = 5;
    string userAnswer;
    unordered_set<string> guessedAnswers;

    while (attempts > 0) {
        question.displayQuestion();
        question.displayGuessedAnswers(guessedAnswers);

        cout << "\nJawaban: ";
        getline(cin, userAnswer);

        if (question.checkAnswer(userAnswer, score, guessedAnswers)) {
            cout << "\nJawaban benar :D";
        } else {
            --attempts;
            cout << "\nJawaban salah, kamu punya " << attempts << " kesempatan lagi\n";
        }
        cin.get();
        system("CLS");
    }

    cout << "Ronde selesai, kalian menghasilkan total score: " << score << endl;
    question.displayAllAnswers();
    system("CLS");
}

int main() {
    vector<Question> questions = {
        {
            "Pertanyaan 1\nHewan apa yang paling sulit dimasukkan dalam Bahtera Nuh?",
            { {"gajah", 50}, {"singa/harimau", 40}, {"jerapah", 35}, {"beruang kutub", 30}, {"ular", 25}, {"burung", 20} }
        },
        {
            "Pertanyaan 2\nDari 12 rasul Yesus, siapakah rasul yang paling terkenal?",
            { {"Petrus", 60}, {"Matius", 30}, {"Lukas", 25}, {"Yudas", 25}, {"Yohanes", 25}, {"Markus", 20} }
        },
        {
            "Pertanyaan 3\nSebutkan nama nabi yang terkenal di Perjanjian Lama?",
            { {"Musa", 40}, {"Yusuf", 35}, {"Abraham", 30}, {"Elia", 30}, {"Daniel", 25}, {"Nuh", 15} } 
        },
        {
            "Pertanyaan 4\nSebutkan nama tokoh perempuan yang berpengaruh di Alkitab?",
            { {"Maria", 50}, {"Debora", 40}, {"Ester", 35}, {"Rut", 30}, {"Elisabet", 25}, {"Hawa", 10} }
        },
    };

    cout << "WELCOME TO FAMILY 100 BIBLE EDITION\n";
    cin.get();

    cout << "Akan ada 3 pertanyaan seputar Alkitab yang bisa kalian jawab\n";
    cout << "Bekerja sama lah untuk menentukan jawaban yang benar\n\n";
    cin.get();

    cout << "DISCLAIMER: Jawaban yang terpilih berdasarkan survey dan pandangan pembuat gamenya ehe\n";
    cout << "-Louis-\n";
    cin.get();

    system("cls");
    for (const auto& question : questions) {
        playRound(question);
        cout << endl;
    }

    cout << "Game over. Terima kasih yang sudah berpartisipasi XD" << endl;
    cin.get();
    
    return 0;
}
