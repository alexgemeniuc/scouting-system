#include <iostream>

int main ()
{

    int optiune;
    std::string name;
    std::string nationalitate;
    do
    {
        std::cout << "******SCOUTING SYSTEM MENU******" << std::endl;
        std::cout << "1. Introducere jucator" << std::endl;
        std::cout << "2. Afisare jucator" << std::endl;
        std::cout << "3. (inca ma gandesc)" << std::endl;
        std::cout << "4. Iesire" << std::endl;
        std::cout << "********************************" << std::endl;
        std::cout << "Introduceti optiunea : ";
        std::cin >> optiune;
        switch(optiune)
        {
        case 1:
            std::cout << "Introduceti numele jucatorului : ";
            std::cin.ignore();
            std::getline(std::cin, name);
            std::cout << "Introduceti nationalitatea : ";
            std::getline(std::cin, nationalitate);
            break;
        case 2:
            std::cout << "Nume : " << name << std::endl;
            std::cout << "Nationalitate : " << nationalitate << std::endl;
            break;
        case 3:
            std::cout << "Aceasta idee este in curs de implementare." << std::endl;
            break;
        case 4:
            std::cout << "EXIT!" << std::endl;
            break;
        default:
            std::cout << "Optiunea pe care ati introdus-o nu este corecta." << std::endl;
        }

    }
    while (optiune != 4);
    return 0;
}
