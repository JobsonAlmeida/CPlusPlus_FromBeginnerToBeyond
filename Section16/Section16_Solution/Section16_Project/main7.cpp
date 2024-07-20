// Section 16
// Interfaces - start

#include <iostream>

class Account {
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {}
};

class Checking : public Account {
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {}
};

class Savings : public Account {
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {}
};

class Trust : public Account {
public:
    virtual void withdraw(double amount)
    {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {}
};

int main()
{
    Account* p1 = new Account();
    std::cout << *p1 << std::endl;

    Account* p2 = new Checking();
    std::cout << *p2 << std::endl;

    //    Account a;
    //    std::cout << a<< std::endl;
    //    
    //    Checking c;
    //    std::cout << c << std::endl;
    //
    //    Savings s;
    //    std::cout << s << std::endl;
    //    
    //    Trust t;
    //    std::cout << t << std::endl;

    delete p1;
    delete p2;
    return 0;
}

