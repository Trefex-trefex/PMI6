#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// А - искомая буква
// insert - буква, которую надо вставить
void insertSymbol(char* str, char A, char insert) {
    char* ptr = str;

    while (*ptr) {
        if (*ptr == A) {
            ptr++;
            if (*ptr == A) {
                // Вставляем новый символ перед первым вхождением
                for (char* t = str + strlen(str); t >= ptr-1; t--) {
                    *(t + 1) = *t;
                }
                *(ptr-1) = insert;
                ptr++;
            }
        }
        ptr++;
    }
}

void removeLetter(std::string& str, char A) {
    size_t lastWordEnd = str.find_last_not_of(' '); //str.find_last_of(' ');
    size_t lastWordStart = str.find_last_of(' ', lastWordEnd) + 1;
    bool contains = true;
    while (contains) {
        bool flag = false;
        for (size_t i = lastWordStart; i <= lastWordEnd; ++i) {
            if (str[i] == A) {
                flag = true;
            }
        }
        if (!flag) {
            contains = false;
        }
        else {
            lastWordEnd = str.find_last_not_of(' ', lastWordStart);
            lastWordStart = str.find_last_of(' ', lastWordEnd) + 1;
        }
    }
    str.erase(lastWordStart, lastWordEnd - lastWordStart + 1);
}

int check(int number) {
    int last = number % 10;
    while (number >= 10) {
        number /= 10;
    }
    int first = number;
    return (first == last) ? 1 : 0;
}

int countNumbers(char* filename) {
    ifstream fin(filename);
    if (!fin) {
        cerr << "Не удалось открыть файл для чтения.\n";
        return 0;
    }
    int number;
    int count = 0;
    while (fin >> number) {
        count += check(number);
    }
    fin.close();
    return count;
}
