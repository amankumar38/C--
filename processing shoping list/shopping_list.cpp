#include <iostream>
#include <iomanip>

int const m = 50;
class shopping_list
{
    int itemcode[m];
    float itemprice[m];
    int count;

public:
    void CNT() { count = 0; }
    void getitem();
    void displayitem();
    void displaysum();
    void remove();
};

void shopping_list::getitem()
{
    std::cout << "Enter the item code: " << std::endl;
    std::cin >> itemcode[count];

    std::cout << "Enter the item price: " << std::endl;
    std::cin >> itemprice[count];

    count++;
}

void shopping_list::displaysum()
{
    float sum = 0;
    for (int i = 0; i < count; i++)
        sum += itemprice[i];
        std::cout << "Total value :" << sum << std::endl;
}

void shopping_list::remove()
{
    int delete_item_code;
    std::cout << " Enter item code: " << std::endl;
    std::cin >> delete_item_code;

    for (int i = 0; i < count; i++)
        if (itemcode[i] == delete_item_code)
            itemprice[i] = 0;
}

void shopping_list::displayitem()
{
    std::cout << "Code price " << std::endl;

    for (int i = 0; i < count; i++)
    {
        std::cout << "\n"<< itemcode[i];
        std::cout << " " << itemprice[i];
    }
    std::cout<<std::endl;
}

int main(int argc, char const *argv[])
{
    shopping_list order;
    order.CNT();
    int x;

    do{
        std::cout <<"You can do following" <<std::endl
                  <<"Enter the appropriate number "<< std::endl
                  <<"1 : Add an item to list " << std::endl
                  <<"2 : Display total value " << std::endl
                  <<"3 : Delete an item " << std::endl
                  <<"4 : Display all item " << std::endl
                  <<"5 : Quit "  << std::endl
                  <<"What is your option " <<std::endl;
        std::cin >> x;

        switch (x)
        {
        case 1 : order.getitem();
            break;
        case 2 : order.displaysum();
            break;
        case 3 : order.remove();
            break;
        case 4 : order.displayitem();
            break;
        case 5 : break;
        default:
            std::cout << "Invalid entry! please try again. " <<std::endl;
            break;
        }
    }while (x != 5);
    
    return 0;
}

