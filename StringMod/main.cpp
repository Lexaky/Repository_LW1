#include <iostream>
#include <string>
using namespace std;

//int('s') - ����������� char � ����� ������� ������� ASCII
//char(123) - �������� ��������

void replace_(string& s, char c, char c_)
//�������� ��� ������� c � ������ s �� ������� c_
{
    if (s.length() > 0) {
        for (int i = 0; i <= s.length(); i++)
        {
            if (s[i] == c) {
                s[i] = c_;
            }
        }
    }
}

void rusToEng (string& s)
//�������������� ������� ����� � ����������
{
    if (s.length() > 0) {
        string newS = "";
        bool flag;
        for (int i = 0; i <= s.length() - 1; i++)
        {
            flag = false;
                switch(s[i])
            {
            case '�': flag = true;
            case '�': flag == true? newS += 'a': newS += 'A';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'b': newS += 'B';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'v': newS += 'V';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'g': newS += 'G';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'd': newS += 'D';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'e': newS += 'E';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += "yo": newS += "YO";
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'j': newS += 'J';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'z': newS += 'Z';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'i': newS += 'I';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += "iy": newS += "IY";
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'k': newS += 'K';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'l': newS += 'L';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'm': newS += 'M';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'n': newS += 'N';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'o': newS += 'O';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'p': newS += 'P';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'r': newS += 'R';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 's': newS += 'S';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 't': newS += 'T';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'u': newS += 'U';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'f': newS += 'F';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'h': newS += 'H';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'c': newS += 'C';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += "ch": newS += "CH";
                break;
            case '�': flag = true;
            case '�': flag == true? newS += "sh": newS += "SH";
                break;
            case '�': flag = true;
            case '�': flag == true? newS += "sch": newS += "SCH";
                break;
            case '�':
            case '�':
                break;
            case '�': flag = true;
            case '�': flag == true? newS += "yi": newS += "YI";
                break;
            case '�':
            case '�':
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'a': newS += 'A';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += 'y': newS += 'Y';
                break;
            case '�': flag = true;
            case '�': flag == true? newS += "ya": newS += "YA";
                break;
            default:
            newS += s[i];
            break;
            }
        }

        s = newS;
    }
}

void engToRus (string& s)
//�������������� ���������� ����� � �������
{
    if (s.length() > 0) {
        string newS = "";
        bool flag;
    for (int i = 0; i <= s.length() - 1; i++)
    {
        flag = false;
        switch(s[i])
        {
        case 'a': flag = true;
        case 'A': flag == true? newS += '�': newS += '�';
            break;
        case 'b': flag = true;
        case 'B': flag == true? newS += '�': newS += '�';
            break;
        case 'c': flag = true;
        case 'C': flag == true? newS += "��": newS += "��";
            break;
        case 'd': flag = true;
        case 'D': flag == true? newS += '�': newS += '�';
            break;
        case 'e': flag = true;
        case 'E': flag == true? newS += '�': newS += '�';
            break;
        case 'f': flag = true;
        case 'F': flag == true? newS += '�': newS += '�';
            break;
        case 'g': flag = true;
        case 'G': flag == true? newS += '�': newS += '�';
            break;
        case 'h': flag = true;
        case 'H': flag == true? newS += '�': newS += '�';
            break;
        case 'i': flag = true;
        case 'I': flag == true? newS += '�': newS += '�';
            break;
        case 'j': flag = true;
        case 'J': flag == true? newS += '�': newS += '�';
            break;
        case 'k': flag = true;
        case 'K': flag == true? newS += '�': newS += '�';
            break;
        case 'l': flag = true;
        case 'L': flag == true? newS += '�': newS += '�';
            break;
        case 'm': flag = true;
        case 'M': flag == true? newS += '�': newS += '�';
            break;
        case 'n': flag = true;
        case 'N': flag == true? newS += '�': newS += '�';
            break;
        case 'o': flag = true;
        case 'O': flag == true? newS += '�': newS += '�';
            break;
        case 'p': flag = true;
        case 'P': flag == true? newS += '�': newS += '�';
            break;
        case 'q': flag = true;
        case 'Q': flag == true? newS += '�': newS += '�';
            break;
        case 'r': flag = true;
        case 'R': flag == true? newS += '�': newS += '�';
            break;
        case 's': flag = true;
        case 'S': flag == true? newS += '�': newS += '�';
            break;
        case 't': flag = true;
        case 'T': flag == true? newS += '�': newS += '�';
            break;
        case 'u': flag = true;
        case 'U': flag == true? newS += '�': newS += '�';
            break;
        case 'v': flag = true;
        case 'V': flag == true? newS += '�': newS += '�';
            break;
        case 'w': flag = true;
        case 'W': flag == true? newS += '�': newS += '�';
            break;
        case 'x': flag = true;
        case 'X': flag == true? newS += "��": newS += "��";
            break;
        case 'y': flag = true;
        case 'Y': flag == true? newS += '�': newS += '�';
            break;
        case 'z': flag = true;
        case 'Z': flag == true? newS += '�': newS += '�';
            break;
        default:
            newS += s[i];
            break;
        }
    }
     s = newS;
    }
}

void spaces(string& s, int counts)
//��������� ������� ����� ������� �� ������ �������
{
    if (s.length() > 0)
    {
        for(int i = 0; i < s.length() - 1; i++)
        {
            while (s[i] == ' ' && s[i+1] == ' ') s.erase(i, 1);
        }

        if (counts > 1)
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] == ' ')
                {
                    for (int j = 1; j <= counts-1; j++)
                    {
                        s.insert(i, " ");
                    }
                    i += counts-1;
                }
            }
    }
}

void changeSize(string& s, bool u, bool d, bool r)
//������ ������ ���� � ������ s
{
    if (u == true) {
        for (int i = 0; i <= s.length(); i++)
        {
            if (int(s[i]) >= 97 && int(s[i]) <= 122)
            {
                s[i] = char(int(s[i]) - 32);
            }
        }
    } else if (d == true) {
        for (int i = 0; i <= s.length(); i++)
        {
            if (int(s[i]) >= 65 && int(s[i]) <= 90)
            {
                s[i] = char(int(s[i]) + 32);
            }
        }
    } else if (r == true) {
        for (int i = 0; i <= s.length(); i++)
        {
            if (int(s[i]) >= 65 && int(s[i]) <= 90)
            {
                s[i] = char(int(s[i]) + 32);
            } else if (int(s[i]) >= 97 && int(s[i]) <= 122)
            {
                s[i] = char(int(s[i]) - 32);
            }
        }
    }
}

void onlyFirstUp(string& s, bool yep)
//������ ������ ������ ����� ��������� (���� ������ ����� - ��� �����)
{
    if (s.length() > 0 && yep == true)
    {
        if ((int)s[0] > 96 && (int)s[0] < 123)
        {
            s[0] = char((int)s[0] - 32);
        }

        for (int i = 1; i <= s.length()-1; i++)
        {
            if ((int)s[0] > 64 && (int)s[0] < 91)
                {
                    s[i] = char((int)s[0] + 32);
                }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    string getString;


    getString = "Grac Valentin Sergeevich";
    //configs

    int spaceCount = 1; //���������� �������� ����� �������. (int <= 0 --> 1 ������).

    bool upper = false; //������ ���� ���� �� ���������� ���������
    bool down = false; //������ ���� ���� �� ���������� ���������
    bool reverse_ = false; //������� ���� ��������� ���� � ��������� � ��������

    bool firstLetterUp = true; //������ ����� �������, ��������� ���������
    bool pointEnd = false; //��������� ����� � ����� ������

    bool toRus = false; //������ ���������� ���� ��������
    bool toEng = false; //������ ������� ���� �����������
    spaces(getString, spaceCount);
    changeSize(getString, upper, down, reverse_);
    engToRus(getString);
    cout << getString << endl;
    return 0;
}
