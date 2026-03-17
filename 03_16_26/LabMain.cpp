/* Program name: Module 1 part b lab
 * Author: Angela Venable
 * Date last updated: 03/16/2026
 * Purpose: connect github to codegrade
 */

#include <iostream>
#include <string>

class Person
{
public:
    Person(std::string n, int a);
    std::string getName();
    void setName(std::string name);
    int getAge();
    void setAge(int a);
    void greet();

private:
    int age;
    std::string name;
};

int main()
{
    Person p("Angela Venable", 32);
    p.setAge(32);
    // comment line
    std::cout << "Hello CSCI201!" << std::endl;
    std::cout << "My name is Angela Venable" << std::endl;
    /*
    more comment lines
    are here
    */
    return 0;
}

void Person::setAge(int a)
{
    if (a >= 0)
    {
        age = a;
    }
    else
    {
        age = 25;
    }
}

Person::Person(std::string n, int a)
{
    setAge(a);
    name = n;
}