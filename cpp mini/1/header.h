#ifndef HEADER_H
#define HEADER_H
#include<cstring>
class Book
{
    int bookId;
    char bookName[100];
    char authorName[100];
    int price;
    int numberOfDaysUsed;
    public:
        Book();
        Book(int,const char*,const char*,int,int);
        ~Book();
        int calculateFine();
        void accept();
        void display();
        int getBookId() const { return bookId; }
        void setBookId(int bookId_) { bookId = bookId_; }
        void setBookName(const char *name)
        {
            strcpy(bookName,name);
        }
        char* getBookName()
        {
            return bookName;
        }
        void setAuthorName(const char *name)
        {
            strcpy(authorName,name);
        }
        char* getAuthorName()
        {
            return authorName;
        }
        int getPrice() const { return price; }
        void setPrice(int price_) { price = price_; }

        int getNumberOfDaysUsed() const { return numberOfDaysUsed; }
        void setNumberOfDaysUsed(int numberOfDaysUsed_) { numberOfDaysUsed = numberOfDaysUsed_; }
        


};

#endif // HEADER_H
