#include <iostream>
#include <fstream>
int main ()
{

    int optiune;
    int number;
    std::string name;
    std::string country;
    std::string pozitie;
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
            std::cout << "Introduceti tara : ";
            std::getline(std::cin, country);
            std::cout << "Introduceti # : ";
            std::cin >> number;
            std::cout << "Introduceti pozitia (portar, aparator, mijlocas, atacant) : ";
            std::cin.ignore();
            std::getline(std::cin, pozitie);
            {
                std::ofstream file ("jucatori.txt", std::ios::app);
                if(file.is_open())
                {
                    file << "#" << number << " " << name << " ; " << country << " ; " << pozitie << std::endl;
                    file.close();
                    std::cout << "Jucator salvat cu succes!" << std::endl;
                }
                else
                {
                    std::cout << "Eroare la deschiderea fisierului!" << std::endl;
                }
            }
            break;
        case 2:{
            std::ifstream file ("jucatori.txt");
            if(file.is_open())
            {
                std::string linie;
                std::cout << "Jucatori:\n";
                while(std::getline(file,linie))
                {
                    std::cout << linie <<std::endl;
                }
                file.close();
            }
            else
            {
                std::cout << "Nu s-au gasit jucatori in fisier!" <<std::endl;
            }
            break;
        }
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
