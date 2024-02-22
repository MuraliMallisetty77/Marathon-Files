#include"Account.h"

std::ostream &operator<<(std::ostream &os, const Account &rhs) {
    os << "accountNumber: " << rhs.accountNumber
       << " accountUnits: " ;
       for(const Unit& unit:rhs.accountUnits)
       {
            std::cout<<unit<<"\n";
       }
    return os;
}

Account::Account(int accno, std::vector<Unit> units)
:accountNumber(accno),accountUnits(units)
{
}
