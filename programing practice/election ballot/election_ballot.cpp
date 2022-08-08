#include <iostream>
#include <conio.h>

int const size = 50;

class election_ballot
{
private:
    int candidate;
    int vote[size];
    int ballot[5];

    static int spoil_ballot;

public:
    void getdisplaydata();
};

int election_ballot::spoil_ballot;

void election_ballot::getdisplaydata()
{
    std::cout << "Enter the number of candidates: " <<std::endl;
    std::cin >> candidate;

    static int a,b,c,d,e;
    a = 0;
    a=b=c=d=e;

    std::cout << "Enter the number from 1-5: " <<std::endl;

    for(int i = 0; i < candidate; i++)
    {
        std::cout << "Enter the votes: " <<std::endl;
           std::cin >> vote[i];

        switch (vote[i]){
            case 1: ballot[a];
                a++;
                break;
            case 2: ballot[b];
                b++;
                break;
            case 3: ballot[c];
                c++;
                break;
            case 4: ballot[d];
                d++;
                break;
            case 5: ballot[e];
                e++;
                break;
            default : ++spoil_ballot;
        }
    }

    int choice;

    do{
        std::cout <<" 1) Score by ballot A" <<std::endl;
        std::cout <<" 2) Score by ballot B" <<std::endl;
        std::cout <<" 3) Score by ballot C" <<std::endl;
        std::cout <<" 4) Score by ballot D" <<std::endl;
        std::cout <<" 5) Score by ballot E" <<std::endl;
        std::cout <<" 6) Spoil ballot" <<std::endl;
        std::cout <<" 7) EXIT.." <<std::endl;
        
        std::cout <<" Enter your Choice: " <<std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 1: std::cout <<" Score by ballot A" << a <<std::endl;
            break;

        case 2: std::cout <<" Score by ballot B" << b <<std::endl;
            break;

        case 3: std::cout <<" Score by ballot C" << c <<std::endl;
            break;

        case 4: std::cout <<" Score by ballot D" << d <<std::endl;
            break;

        case 5: std::cout <<" Score by ballot E" << e <<std::endl;
            break;

        case 6: std::cout <<" Spoil Ballot " << spoil_ballot <<std::endl;
            break;        
        
        case 7: default: 
            break;
        }
    }while (1);

}

int main(int argc, char const *argv[])
{
    election_ballot obj;

    obj.getdisplaydata();
    return 0;
}

