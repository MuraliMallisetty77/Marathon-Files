#ifndef HEADER_H
#define HEADER_H

#include<cstring>
class Loan
{
    long loanNumber;
    float amount;
    char name[100];
    float interestAmount;
    static int num;
    public:
        Loan();
        Loan(float,const char*,float);
        ~Loan();
        float calculateInterest();
        void insertRecord();
        void printRecord();

        long getLoanNumber() const { return loanNumber; }
        void setLoanNumber(long loanNumber_) { loanNumber = loanNumber_; }
        void setName(const char *n)
        {
            strcpy(name,n);
        }
        char* getName()
        {
            return name;
        }
        float getAmount() const { return amount; }
        void setAmount(float amount_) { amount = amount_; }

        float getInterestRate() const { return interestAmount; }
        void setInterestRate(float interestRate_) { interestAmount = interestRate_; }
};

#endif // HEADER_H
