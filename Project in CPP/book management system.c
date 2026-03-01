#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Book {
public:
    int id;
    string name;
    string author;
    string category;
    double price;
    double rating;

    Book(int i, string n, string a, string c, double p, double r) {
        id = i;
        name = n;
        author = a;
        category = c;
        price = p;
        rating = r;
    }

    void display() {
        cout << "\nID: " << id
             << "\nName: " << name
             << "\nAuthor: " << author
             << "\nCategory: " << category
             << "\nPrice: " << price
             << "\nRating: " << rating << endl;
    }
};

class BookManager {
    vector<Book> books;

public:
    void addBook() {
        int id;
        string name, author, category;
        double price, rating;

        cout << "Enter ID: ";
        cin >> id;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Author: ";
        getline(cin, author);

        cout << "Enter Category: ";
        getline(cin, category);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Rating: ";
        cin >> rating;

        books.push_back(Book(id, name, author, category, price, rating));
        cout << "Book Added Successfully!\n";
    }

    void displayAll() {
        if (books.empty()) {
            cout << "No books available.\n";
            return;
        }
        for (auto &b : books)
            b.display();
    }

    void searchById(int id) {
        for (auto &b : books) {
            if (b.id == id) {
                b.display();
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void searchByName(string name) {
        for (auto &b : books) {
            if (b.name == name) {
                b.display();
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void removeBook(int id) {
        for (int i = 0; i < books.size(); i++) {
            if (books[i].id == id) {
                books.erase(books.begin() + i);
                cout << "Book Removed Successfully!\n";
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void updateBook(int id) {
        for (auto &b : books) {
            if (b.id == id) {
                cout << "Enter New Price: ";
                cin >> b.price;
                cout << "Enter New Rating: ";
                cin >> b.rating;
                cout << "Book Updated Successfully!\n";
                return;
            }
        }
        cout << "Book not found!\n";
    }

    void showAuthorBooks(string author) {
        for (auto &b : books) {
            if (b.author == author)
                b.display();
        }
    }

    void showCategoryBooks(string category) {
        for (auto &b : books) {
            if (b.category == category)
                b.display();
        }
    }

    void top3ByPrice() {
        sort(books.begin(), books.end(), [](Book a, Book b) {
            return a.price > b.price;
        });

        cout << "\nTop 3 Expensive Books:\n";
        for (int i = 0; i < books.size() && i < 3; i++)
            books[i].display();
    }

    void top3ByRating() {
        sort(books.begin(), books.end(), [](Book a, Book b) {
            return a.rating > b.rating;
        });

        cout << "\nTop 3 Rated Books:\n";
        for (int i = 0; i < books.size() && i < 3; i++)
            books[i].display();
    }
};

int main() {
    BookManager manager;
    int choice;

    do {
        cout << "\n---- Book Management System ----\n";
        cout << "1. Add Book\n";
        cout << "2. Remove Book\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Search Book by Name\n";
        cout << "5. Show Author's Books\n";
        cout << "6. Show Category's Books\n";
        cout << "7. Update Book\n";
        cout << "8. Top 3 by Price\n";
        cout << "9. Top 3 by Rating\n";
        cout << "10. Display All Books\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        int id;
        string name;

        switch (choice) {
        case 1: manager.addBook(); break;
        case 2:
            cout << "Enter ID: ";
            cin >> id;
            manager.removeBook(id);
            break;
        case 3:
            cout << "Enter ID: ";
            cin >> id;
            manager.searchById(id);
            break;
        case 4:
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            manager.searchByName(name);
            break;
        case 5:
            cin.ignore();
            cout << "Enter Author Name: ";
            getline(cin, name);
            manager.showAuthorBooks(name);
            break;
        case 6:
            cin.ignore();
            cout << "Enter Category: ";
            getline(cin, name);
            manager.showCategoryBooks(name);
            break;
        case 7:
            cout << "Enter ID: ";
            cin >> id;
            manager.updateBook(id);
            break;
        case 8: manager.top3ByPrice(); break;
        case 9: manager.top3ByRating(); break;
        case 10: manager.displayAll(); break;
        case 0: cout << "Exiting...\n"; break;
        default: cout << "Invalid Choice!\n";
        }

    } while (choice != 0);

    return 0;
}