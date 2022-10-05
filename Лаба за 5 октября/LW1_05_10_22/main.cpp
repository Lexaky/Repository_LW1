#include <iostream>
#include <vector>
#include <fstream>

class man
{
private:
    char *firstName; //���
    char *surName; //�������
    char *message; //�����
    unsigned short int age; //������� ��������

public:
man(char *i, char *f, unsigned short int a)
{
    firstName = i;
    surName = f;
    age = a;
    message = "";
    std::cout << "Man " << firstName << " " << surName << " " << age << " years old was created" << std::endl;
}
man (char *i, char *f, unsigned short int a, char *thought)
{
    firstName = i;
    surName = f;
    age = a;
    message = thought;
    std::cout << "Man " << firstName << " " << surName << " " << age << " years old was created and said: " << message << std::endl;
}

    char* getFirstName()
    {
        return firstName;
    }
    char* getSurName()
    {
        return surName;
    }
    int getAge()
    {
        return age;
    }

    void setFirstName(char* _firstName)
    {
        firstName = _firstName;
    }
    void setSurName(char* _surName)
    {
        surName = _surName;
    }
    void setAge(int a)
    {
        age = a;
    }

    void remember() // ���������� ������, ������� � �������
    {
        std::cin >> message;
    }
    char* talk() // ������� ��, ��� ��������
    {
        return message;
    }

    static void staticMan()
    {
        std::cout << "You have addressed the class Man!" << std::endl;
    }

};

class house
{
private:
    unsigned int number;
    std::vector <man> citizenList;
    int countCitizen = 0;

    public:
        house() { //Constructor#1
            greeting();
            number = 0;
        }
        house(unsigned int houseNumber)//Constructor#2
        {
            greeting();
            number = houseNumber;
        }
        house(unsigned int houseNumber, std::vector<man> citizens)//Constructor#3
        {
            greeting();
            number = houseNumber;
            citizenList = citizens;
        }
        house (std::vector<man> citizens)//Constructor#4
        {
            greeting();
            citizenList = citizens;
            number = 0;
        }

        void greeting() //�����������
        {
            std::cout << "House was created!" << std::endl;
        }


        void addCitizen(man person) //�������� ������ � ���
        {
            countCitizen++;
            citizenList.push_back(person);
        }

        bool isHeLiveHere(man person) //�������� ���� �� ������ person ���� man � ������ ����
        {
            for(int i = 0; i <= countCitizen; i++)
            {
                if (citizenList[i].getAge() == person.getAge() && citizenList[i].getFirstName() == person.getFirstName() && citizenList[i].getSurName() == person.getSurName()) return true;
            }
            return false;
        }

        void getList() //��������� ������ ��� ������� ������� ����
        {
            std::cout << "In house live: " << std::endl;
            for (int i = 0; i < countCitizen; i++)
            {
                std::cout << citizenList[i].getFirstName() << std::endl;
            }
        }

        static void staticHouse()
            {
        std::cout << "You have addressed the class House!" << std::endl;
            }

        int getCounts() //�������� ���������� ������� � ����
        {
            return countCitizen;
        }

        unsigned int getAdress() //�������� ������ ����
        {
            return number;
        }

};

int main()
{
    setlocale(LC_ALL, "rus");
    //getline -> arrays of string + pointers
    //cin -> console input obj

    char name[] = "Alexey";
    char surName[] = "Streltsov";
    man Alex = man(name, surName, 27);
    Alex.setAge(27);


    man Jack = man("Jack", "Piterson", 33);
    std::cout << Alex.getAge() << std::endl;

    man Rick = man("Rick", "Swift", 55, "What do you know about this people?");
    std::cout << Rick.talk() << std::endl;

    house Miami = house(120);
    Miami.addCitizen(Jack);
    Miami.addCitizen(Alex);



    std::cout << Miami.isHeLiveHere(Rick) << std::endl;

    std::cout << Miami.getCounts() << std::endl;

    std::cout << Miami.getAdress() << std::endl;

    //Miami.getList();

    return 0;
}

/*

#ifndef MY_HEADER
#define MY_HEADER //����� ���� ��������, ��� ���� header ������� ��������� ���, �����
    //������ ��������� � ����� �� ����� ���������� ������������� header.
    //��� ��������� ������� � ���, ��� ���� ���������� � ����� ������ �� ����������, �� ��
    //� ����������.
#endif // MY_HEADER

*/

