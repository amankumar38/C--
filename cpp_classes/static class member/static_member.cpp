#include <iostream>

class static_member{
    static int count;
    int number;
public:
    void getdata(int a);
    void getcount();
};

void static_member::getdata(int a){
    number = a;
    count++;
}

void static_member::getcount()
{
    std::cout << "Count: ";
    std::cout << count << std::endl;
}

int static_member::count;

int main(int argc, char const *argv[])
{
    static_member mbr_a,mbr_b,mbr_c, mbr_d;

    mbr_a.getcount();
    mbr_b.getcount();
    mbr_c.getcount();
    mbr_d.getcount();
   
    mbr_a.getdata(100);
    mbr_b.getdata(200);
    mbr_c.getdata(300);
    mbr_d.getdata(400);   

    std::cout << "After reading data " << std::endl;

    mbr_a.getcount();
    mbr_b.getcount();
    mbr_c.getcount();
    mbr_d.getcount(); 
    return 0;
}


