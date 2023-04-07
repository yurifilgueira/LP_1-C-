#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class Book
{
private:
    string title;
    string author;
    vector<double> evaluationScores;

public:
    Book();
    Book(string title, string author);
    string getTitle();
    void setTitle(string title);
    string getAuthor();
    void setAuthor(string author);
    void printScores();
    double averageScore();
    void addScore(double score);
};

#endif