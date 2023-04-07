/*3. Crie uma classe Livro que tenha os seguintes membros: título, autor e
notas de avaliação. As notas de avaliação devem ser armazenadas em um
“vector”. Em seguida, crie um “vector” de Livro e preencha-o com alguns
livros. Escreva também uma função que calcula a média de todas as notas
de avaliação de um livro. Por fim, escreva outra função que calcula a
média de todas as notas de avaliação de todos os livros no “vector”.*/

#include <iostream>
#include <Book.h>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{

    vector<Book> books;

    Book book1("Harry Potter and the Philosopher's Stone", "J.K. Rowling");
    book1.addScore(4.5);
    book1.addScore(3.7);
    book1.addScore(5.0);
    books.push_back(book1);

    Book book2("One Hundred Years of Solitude", "Gabriel Garcia Marquez");
    book2.addScore(4.8);
    book2.addScore(3.2);
    book2.addScore(4.5);
    books.push_back(book2);

    Book book3("The Lord of the Rings", "J.R.R. Tolkien");
    book3.addScore(4.2);
    book3.addScore(4.9);
    book3.addScore(3.8);
    books.push_back(book3);

    Book book4("Pride and Prejudice", "Jane Austen");
    book4.addScore(4.7);
    book4.addScore(4.1);
    book4.addScore(4.6);
    books.push_back(book4);

    Book book5("Game of Thrones", "George R.R. Martin");
    book5.addScore(4.6);
    book5.addScore(3.9);
    book5.addScore(4.8);
    books.push_back(book5);

    cout << "Print scores:" << endl;
    for (Book book : books)
    {
        cout << book.getTitle() << ":" << endl;
        book.printScores();
    }

    return 0;
}