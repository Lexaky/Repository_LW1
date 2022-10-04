#include <iostream>
#include <string>
using namespace std;

//int('s') - преобразует char в номер символа таблицы ASCII
//char(123) - обратное действие

void replace_(string& s, char c, char c_)
//Заменяет все символы c в строке s на символы c_
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
//Транскрибирует русские буквы в английские
{
    if (s.length() > 0) {
        string newS = "";
        bool flag;
        for (int i = 0; i <= s.length() - 1; i++)
        {
            flag = false;
                switch(s[i])
            {
            case 'а': flag = true;
            case 'А': flag == true? newS += 'a': newS += 'A';
                break;
            case 'б': flag = true;
            case 'Б': flag == true? newS += 'b': newS += 'B';
                break;
            case 'в': flag = true;
            case 'В': flag == true? newS += 'v': newS += 'V';
                break;
            case 'г': flag = true;
            case 'Г': flag == true? newS += 'g': newS += 'G';
                break;
            case 'д': flag = true;
            case 'Д': flag == true? newS += 'd': newS += 'D';
                break;
            case 'е': flag = true;
            case 'Е': flag == true? newS += 'e': newS += 'E';
                break;
            case 'ё': flag = true;
            case 'Ё': flag == true? newS += "yo": newS += "YO";
                break;
            case 'ж': flag = true;
            case 'Ж': flag == true? newS += 'j': newS += 'J';
                break;
            case 'з': flag = true;
            case 'З': flag == true? newS += 'z': newS += 'Z';
                break;
            case 'и': flag = true;
            case 'И': flag == true? newS += 'i': newS += 'I';
                break;
            case 'й': flag = true;
            case 'Й': flag == true? newS += "iy": newS += "IY";
                break;
            case 'к': flag = true;
            case 'К': flag == true? newS += 'k': newS += 'K';
                break;
            case 'л': flag = true;
            case 'Л': flag == true? newS += 'l': newS += 'L';
                break;
            case 'м': flag = true;
            case 'М': flag == true? newS += 'm': newS += 'M';
                break;
            case 'н': flag = true;
            case 'Н': flag == true? newS += 'n': newS += 'N';
                break;
            case 'о': flag = true;
            case 'О': flag == true? newS += 'o': newS += 'O';
                break;
            case 'п': flag = true;
            case 'П': flag == true? newS += 'p': newS += 'P';
                break;
            case 'р': flag = true;
            case 'Р': flag == true? newS += 'r': newS += 'R';
                break;
            case 'с': flag = true;
            case 'С': flag == true? newS += 's': newS += 'S';
                break;
            case 'т': flag = true;
            case 'Т': flag == true? newS += 't': newS += 'T';
                break;
            case 'у': flag = true;
            case 'У': flag == true? newS += 'u': newS += 'U';
                break;
            case 'ф': flag = true;
            case 'Ф': flag == true? newS += 'f': newS += 'F';
                break;
            case 'х': flag = true;
            case 'Х': flag == true? newS += 'h': newS += 'H';
                break;
            case 'ц': flag = true;
            case 'Ц': flag == true? newS += 'c': newS += 'C';
                break;
            case 'ч': flag = true;
            case 'Ч': flag == true? newS += "ch": newS += "CH";
                break;
            case 'ш': flag = true;
            case 'Ш': flag == true? newS += "sh": newS += "SH";
                break;
            case 'щ': flag = true;
            case 'Щ': flag == true? newS += "sch": newS += "SCH";
                break;
            case 'ъ':
            case 'Ъ':
                break;
            case 'ы': flag = true;
            case 'Ы': flag == true? newS += "yi": newS += "YI";
                break;
            case 'ь':
            case 'Ь':
                break;
            case 'э': flag = true;
            case 'Э': flag == true? newS += 'a': newS += 'A';
                break;
            case 'ю': flag = true;
            case 'Ю': flag == true? newS += 'y': newS += 'Y';
                break;
            case 'я': flag = true;
            case 'Я': flag == true? newS += "ya": newS += "YA";
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
//Транскрибирует английские буквы в русские
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
        case 'A': flag == true? newS += 'а': newS += 'А';
            break;
        case 'b': flag = true;
        case 'B': flag == true? newS += 'б': newS += 'Б';
            break;
        case 'c': flag = true;
        case 'C': flag == true? newS += "сц": newS += "СЦ";
            break;
        case 'd': flag = true;
        case 'D': flag == true? newS += 'д': newS += 'Д';
            break;
        case 'e': flag = true;
        case 'E': flag == true? newS += 'е': newS += 'Е';
            break;
        case 'f': flag = true;
        case 'F': flag == true? newS += 'ф': newS += 'Ф';
            break;
        case 'g': flag = true;
        case 'G': flag == true? newS += 'г': newS += 'Г';
            break;
        case 'h': flag = true;
        case 'H': flag == true? newS += 'х': newS += 'Х';
            break;
        case 'i': flag = true;
        case 'I': flag == true? newS += 'и': newS += 'И';
            break;
        case 'j': flag = true;
        case 'J': flag == true? newS += 'ж': newS += 'Ж';
            break;
        case 'k': flag = true;
        case 'K': flag == true? newS += 'к': newS += 'К';
            break;
        case 'l': flag = true;
        case 'L': flag == true? newS += 'л': newS += 'Л';
            break;
        case 'm': flag = true;
        case 'M': flag == true? newS += 'м': newS += 'М';
            break;
        case 'n': flag = true;
        case 'N': flag == true? newS += 'н': newS += 'н';
            break;
        case 'o': flag = true;
        case 'O': flag == true? newS += 'о': newS += 'О';
            break;
        case 'p': flag = true;
        case 'P': flag == true? newS += 'п': newS += 'П';
            break;
        case 'q': flag = true;
        case 'Q': flag == true? newS += 'к': newS += 'К';
            break;
        case 'r': flag = true;
        case 'R': flag == true? newS += 'р': newS += 'Р';
            break;
        case 's': flag = true;
        case 'S': flag == true? newS += 'с': newS += 'С';
            break;
        case 't': flag = true;
        case 'T': flag == true? newS += 'т': newS += 'Т';
            break;
        case 'u': flag = true;
        case 'U': flag == true? newS += 'у': newS += 'У';
            break;
        case 'v': flag = true;
        case 'V': flag == true? newS += 'в': newS += 'В';
            break;
        case 'w': flag = true;
        case 'W': flag == true? newS += 'в': newS += 'В';
            break;
        case 'x': flag = true;
        case 'X': flag == true? newS += "кс": newS += "КС";
            break;
        case 'y': flag = true;
        case 'Y': flag == true? newS += 'й': newS += 'й';
            break;
        case 'z': flag = true;
        case 'Z': flag == true? newS += 'з': newS += 'З';
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
//Сокращает пробелы между словами до одного пробела
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
//Меняет размер букв в строке s
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
//Делает только первую букву заглавной (Если первая буква - это буква)
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

    int spaceCount = 1; //Количество пробелов между словами. (int <= 0 --> 1 пробел).

    bool upper = false; //Замена всех букв их заглавными аналогами
    bool down = false; //Замена всех букв их прописными аналогами
    bool reverse_ = false; //Перевод всех прописных букв в заглавные и наоборот

    bool firstLetterUp = true; //Первая буква большая, остальные маленькие
    bool pointEnd = false; //Поставить точку в конце строки

    bool toRus = false; //Замена английских букв русскими
    bool toEng = false; //Замена русских букв английскими
    spaces(getString, spaceCount);
    changeSize(getString, upper, down, reverse_);
    engToRus(getString);
    cout << getString << endl;
    return 0;
}
