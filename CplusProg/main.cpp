#include <iostream>

struct Address
{
    string dir;
};


struct Person
{
    string nombre;
    int edad;
    Address direccion;

    Person(const string &name, int age)
    : nombre(name),
      edad(age)
    {
    }

    explicit Person(const Address &dir)
    : direccion(dir)
    {
    }
};

using namespace std;

int main(int argc, char *argv[])
{
    return 0;
}