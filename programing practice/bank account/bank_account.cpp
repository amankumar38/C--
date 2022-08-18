#include <iostream>

int account_choice_global;

class bank
{
    std::string dipositor_name, account_type;
    int account_type_saving, account_type_current, account_choice;
    int account_number, amount_diposited, amount_withdrawn, total_balance;
    double account_balance;

public:
    void dipositor_details();
    void diposit_amount();
    void withdraw_amount();
    void display_dipositor_details();
    void type_of_account();
};

void bank::dipositor_details()
{
    std::cout << "Enter the dipositor name: " << std::endl;
    std::cin >> dipositor_name;
}

void bank::type_of_account()
{
    std::cout << "Choose to account type: " << std::endl;
    std::cout << "Press 1 for savings account " << std::endl;
    std::cout << "Press 2 for current account " << std::endl;
    std::cin >> account_choice;

    if (account_choice == 1)
    {
        account_type = "Savings";
    }
    else if (account_choice == 2)
    {
        account_type = "current";
    }

    account_choice_global = account_choice;
}

void bank::diposit_amount()
{
    std::cout << "Enter the account number: " << std::endl;
    std::cin >> account_number;
    std::cout << " Enter the amount to diposit: " << std::endl;
    std::cin >> amount_diposited;
}

void bank::withdraw_amount()
{
    char withdraw_choice;
    std::cout << "Would you like to withdraw " << std::endl;
    std::cout << "chose from 'y' or 'n' " << std::endl;
    std::cin >> withdraw_choice;
    if (withdraw_choice == 'y')
    {
        std::cout << "Enter the amount to withdraw from the account: " << std::endl;
        std::cin >> amount_withdrawn;
    }
}

void bank::display_dipositor_details()
{

    if (amount_withdrawn > amount_diposited)
    {
        std::cout << "insufficent balance!" << std::endl;
    }
    else
    {
    total_balance = amount_diposited - amount_withdrawn;

    std::cout << "Account holder name: " << dipositor_name << std::endl;
    std::cout << "Account Type: " << account_type << std::endl;
    std::cout << "Account Number: " << account_number << std::endl;
    std::cout << "Amount diposited: " << amount_diposited << std::endl;
    std::cout << "Amount withdrawn: " << amount_withdrawn << std::endl;
    std::cout << "Total Balance: " << total_balance << std::endl;
    }
    
}

int main(int argc, char const *argv[])
{
    bank bank_obj;

    bank_obj.dipositor_details();
    bank_obj.type_of_account();
    while (account_choice_global >= 3)
    {
        bank_obj.type_of_account();
    }
    bank_obj.diposit_amount();

    bank_obj.withdraw_amount();
    bank_obj.display_dipositor_details();

    return 0;
}
