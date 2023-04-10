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

vector<double> Book::getEvaluationScores()
{
    return this->evaluationScores;
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
    cout << endl;
}

double Book::averageRating()
{
    double averageRating = 0;

    for (double s : evaluationScores)
    {
        averageRating += s;
    }

    averageRating /= evaluationScores.size();

    return averageRating;
}

void Book::addScore(double score)
{
    evaluationScores.push_back(score);
}