#include <iostream>
#include <iomanip>

std::string n;
float amount_after_consuption;

class electricity_bill
{
    std::string name;
    float units, charges, amount, price_per_unit, amount_in_rupees, bill_amount;
    float minimum_amount_charged = 50.00;

public:
    int unit_consuption();
    int electricity_bill_amount();

    void dispay_data();

    void unit_price()
    {
        std::cout << "\t\t\t\t\tUnit price " << std::endl;
        std::cout << "Minmum bill amount charged per user = 50.00Rs " << std::endl;
        std::cout << "For frist 100 units - 60P per unit " << std::endl;
        std::cout << "For next 200 units  - 80P per unit " << std::endl;
        std::cout << "byond 300 units     - 90P per unit " << std::endl;
        std::cout << "15 percent surcharge beyond 300 units. " << std::endl;
    }
};

int electricity_bill::unit_consuption()
{
    std::cout << "\n\nEnter the name of user: " << std::endl;
    std::cin >> name;
    std::cout << "Enter the Unit consumed by user: " << std::endl;
    std::cin >> units;

    if (units <= 100)
    {
        price_per_unit = 60;
        amount = units * price_per_unit;
        amount_in_rupees = amount / 100;

        bill_amount = amount_in_rupees + minimum_amount_charged;
    }
    else if (units >= 100 && units <= 200)
    {
        price_per_unit = 80;
        amount = units * price_per_unit;
        amount_in_rupees = amount / 100;

        bill_amount = amount_in_rupees + minimum_amount_charged;
    }
    else
    {
        float surcharge;
        price_per_unit = 90;
        amount = units * price_per_unit;
        amount_in_rupees = amount / 100;

        surcharge = amount_in_rupees * 15 / 100;

        bill_amount = amount_in_rupees + surcharge + minimum_amount_charged;
    }

    return 0;
}

void electricity_bill::dispay_data()
{
    n = name;
    amount_after_consuption = bill_amount;

    std::cout << std::setw(7) << "Name " << std::setw(20) << " Amount" << std::endl;
    std::cout << std::setw(7) << n << std::setw(20) << amount_after_consuption << " " << std::endl;
    
}

int main(int argc, char const *argv[])
{
    

    electricity_bill bill;

    bill.unit_price();
    bill.unit_consuption();

    bill.dispay_data();
    return 0;
}