

#include <iostream>
#include <typeinfo>

int main()
{
    int numOfStudents{30};
    std::cout << "Enter the number of students: ";
    std::cin >> numOfStudents;
    std::cout << numOfStudents << std::endl;
    std::cout << sizeof(numOfStudents) << std::endl;
    std::cout << typeid(numOfStudents).name() << std::endl;
    static_cast<double>(numOfStudents);
    std::cout << typeid(static_cast<double>(numOfStudents)).name() << std::endl;
    return 0;
}
