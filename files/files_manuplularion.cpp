#include <iostream>
#include <fstream>


int main(int argc, char const *argv[])
{
    std::string myText;

    std::ofstream myFile("filename.txt");

    myFile << "this is example of file manupulation in c plus plus";

    myFile.close();

    std::ifstream myReadfile("filename.txt");

    while( getline (myReadfile, myText)){
            std::cout << myText;
    }

    myReadfile.close();
    return 0;
}
