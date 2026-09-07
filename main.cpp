

#include <iostream>
#include <typeinfo>

int main()
{
    int score{};
    char grade{};
    std::cout << "Enter the score: ";
    std::cin >> score;
    switch (score/10)
    {
        case 10:
        case 9: grade = 'A'; break;
        case 8: grade = 'B'; break;
        case 7: grade = 'C'; break;
        case 6: grade = 'D'; break;
        default: grade = 'F'; break; //break 유무 상관없음 (default)
    }
        std::cout << "Your grade is: " << grade << std::endl;


   // int numOfStudents{30};
   // if (numOfStudents ==30) std::cout << "default\n";
   // else std::cout << "changed\n";

   // std::cout << numOfStudents++ <<std::endl; //30
   // std::cout << numOfStudents << std::endl;  //31
   // std::cout << ++numOfStudents << std::endl; //32
   // std::cout << numOfStudents << std::endl; //32

    // int numOfStudents{30};
    // std::cout << "Enter the number of students: ";
    // std::cin >> numOfStudents;
    // std::cout << numOfStudents << std::endl;
    // std::cout << sizeof(numOfStudents) << std::endl;
    // std::cout << typeid(numOfStudents).name() << std::endl;
    // static_cast<double>(numOfStudents);
    // std::cout << typeid(static_cast<double>(numOfStudents)).name() << std::endl;
    return 0;
}
