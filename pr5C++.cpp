#include <iostream>
#include <string>
#include <algorithm>
#include <ctime>

std::string reverse(const std::string& word) {
    std::string temp = word;
    std::reverse(temp.begin(), temp.end());
    return temp;
}

std::string removeVowels(const std::string& word) {
    std::string res;
    for (char i : word) {
        if (std::string("aeiouAEIOU").find(i) == std::string::npos) {
            res += i;
        }
    }
    return res;
}

std::string removeConsonants(const std::string& word) {
    std::string res;
    for (char i : word) {
        if (std::string("aeiouAEIOU").find(i) != std::string::npos) {
            res += i;
        }
    }
    return res;
}

std::string shuffle(const std::string& word) {
    std::string shuffled_word = word;
    std::random_shuffle(shuffled_word.begin(), shuffled_word.end());
    return shuffled_word;
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(0)); 
    std::string word;
    std::cout << "Введи слово: ";
    std::cin >> word;
    int choice;
    std::cout << "Выбери операцию:"
        "\n1 - Перевернуть слово"
        "\n2 - Удалить гласные буквы"
        "\n3 - Удалить согласные буквы"
        "\n4 - Перемешать буквы в слове\n";
    std::cin >> choice;
    switch (choice) {
    case 1:
        std::cout << "Результат: " << reverse(word) << std::endl;
        break;
    case 2:
        std::cout << "Результат: " << removeVowels(word) << std::endl;
        break;
    case 3:
        std::cout << "Результат: " << removeConsonants(word) << std::endl;
        break;
    case 4:
        std::cout << "Результат: " << shuffle(word) << std::endl;
        break;
    default:
        std::cout << "Выбор не распознан(";
        break;
    }
    return 0;
}