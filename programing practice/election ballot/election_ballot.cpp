#include <iostream>

class election
{
    int spoil_ballot = 0; 
    int count[5] = { 0 };
    public:
        void election_candidate()
        {
            std::cout << "\t\t\t\t Election ";
            std::cout << "Press 1 to vote cnadidate 1:";
            std::cout << "Press 2 to vote cnadidate 2:";
            std::cout << "Press 3 to vote cnadidate 3:";
            std::cout << "Press 4 to vote cnadidate 4:";
            std::cout << "Press 5 to vote cnadidate 5:" <<std::endl;

        }

        void castvote()
        {
            int vote;
            std::cout << "Cast your vote: " << std::endl;
            std::cin >> vote;

            if(vote >= 1 && vote <= 5)
            {
                count[vote - 1]++;
            }
            else{
                spoil_ballot++;
            }
        }

        void result()
        {
            std::cout << "\t\t\t\t Election Result: " <<std::endl;
            for(int i=0; i <= 5; i++)
            {
                
                std::cout << "\nCandidate " << i + 1 <<" got " << count[i] << " votes.";
                
            }
            std::cout << "\n\nSpoil Ballots " << spoil_ballot <<std::endl;
        }
};

 int main(int argc, char const *argv[])
 {
    char choice;

    election elec;

    elec.election_candidate();

    do
    {
        elec.castvote();
        std::cout << "Anyone left: " <<std::endl;
        std::cin >> choice;

    } while (toupper(choice) == 'Y');
    elec.result();
    return 0;
 }
 
