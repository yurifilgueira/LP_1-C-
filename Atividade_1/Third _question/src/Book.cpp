#include <Book.h>
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

Book::Book()
{
}

Book::Book(string title, string author)
{
    this->title = title;
    this->author = author;
}

string Book::getTitle()
{
    return this->title;
}

void Book::setTitle(string title)
{
    this->title = title;
}

string Book::getAuthor()
{
    return this->author;
}

void Book::setAuthor(string author)
{
    this->author = author;
}

void Book::printScores()
{
    int i = 1;
    for (double score : evaluationScores)
    {
        cout << "Scores:\n"
             << i << "->" << score << endl;
        i++;
    }
}

// double Book::averageScore() {}

void Book::addScore(double score)
{
    evaluationScores.push_back(score);
}