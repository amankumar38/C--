#include <iostream>
#include <string.h>

class String
{
    char *name;
    int lenght;
    public: 
        String()
        {
            lenght = 0;
            name = new char[lenght + 1]; 
        }
        String(char *s)
        {
            lenght = strlen(s);
            name = new char[lenght + 1];

            strcpy(name, s);
        }

        void display()
        {
            std::cout << name <<"\n";
        }

        void join(String &a, String &b);
};

void String::join(String &a, String &b)
{
    lenght = a.lenght + b.lenght;
    delete name;

    name =new char[lenght + 1];

    strcpy(name, a.name);
    strcpy(name, b.name);
}

int main()
{
    char *frist = "Maharaja ";
    String name1(frist), name2(" Vikrama "), name3(" aditya");
    String s1,s2;

    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();

    s1.display();
    s2.display();

    return 0;
}