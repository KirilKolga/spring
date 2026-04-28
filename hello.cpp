#include <iostream>
#include <string>

std::string askForName()
{
    std::string name;

    while (true)
    {
        std::cout << "Add your name: ";
        std::cin >> name;

        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore(1000, '\n');
            continue;
        }
        break;
    }

    return name;
}

int main()
{
    std::string name = askForName();

    std::cout << "Hello " + name + "!";
    return 0;
}
