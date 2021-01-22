//Name - Ayush
//Roll - 001911001081
//Subject - OOP
//Question - 29
#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

class Book{
    string isbn,title;
    int price;
    list<string> authors;
public:
    Book(string title,string isbn,int price,list<string> authors){
        this->title = title;
        this->isbn = isbn;
        this->price = price;
        this->authors = authors;
    }
    string getTitle(){
        return title;
    }
    int getPrice(){
        return price;
    }
    string getISBN(){
        return isbn;
    }
};

class bookStore{
    list<Book> bookList;
public:
    bookStore(){}
    bookStore(list<Book> bookList){
        this->bookList = bookList;
    }
    list<string> books(){
        unordered_map<string,bool> m;
        list<string> l;
        for(Book b : bookList){
            string isbn = b.getISBN();
            if(!m.count(isbn)){
                l.push_back(isbn);
            }
            m[isbn]++;
        }
        return l;
    }   
    int noOfCopies(string isbn){
        int count = 0;
        for(Book b : bookList){
            if(isbn == b.getISBN()){
                count++;
            }
        }
        return count;
    }
    int totalPrice(){
        int tprice = 0;
        for(Book b : bookList){
            tprice += b.getPrice();
        }
        return tprice;
    }
    string getBookName(string isbn){
        for(Book b : bookList){
            if(isbn == b.getISBN()){
                return b.getTitle();
            }
        }
    }
};

int main()
{
    Book b1("Organic Chemistry","978-81-265-6065-3",900,{"Solomon","Fryhle","Snyder"});
    Book b2("Python Crash Course","978-1-59327-928-8",1500,{"Eric Matthes"});
    Book b3("Cracking The Coding Interviews","978-0-9847828-6-4",400,{"Gayel Laakmann Mcdowell"});
    Book b4("Let Us C","978-81-8333-163-0",350,{"Yashvant Kanetkar"});
    list<Book> l;
    l.push_back(b1); l.push_back(b1); l.push_back(b1); l.push_back(b1); l.push_back(b1); l.push_back(b1);
    l.push_back(b2); l.push_back(b2); l.push_back(b2);
    l.push_back(b3); l.push_back(b3); l.push_back(b3); l.push_back(b3); l.push_back(b3); l.push_back(b3); l.push_back(b3);
    l.push_back(b4); l.push_back(b4); l.push_back(b4); l.push_back(b4);
    bookStore bookHouse = l;
    list<string> unique_copies = bookHouse.books();
    for(string s : unique_copies){
        cout<<bookHouse.getBookName(s)<<", "<<s<<", no of copies : "<<bookHouse.noOfCopies(s)<<endl;
    }
    cout<<"Total price of all books : "<<bookHouse.totalPrice()<<endl;
    return 0;
}