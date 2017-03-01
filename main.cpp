#include <iostream>
#include "vector"

std::string encrypt(std::string text, int n) {
    std::string secondPart, firstPart, temp = text;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < text.length(); j++) {
            if (j % 2 == 0) secondPart += temp[j];
            else firstPart += temp[j];
        }
        temp = firstPart + secondPart;
        firstPart = "";
        secondPart = "";
    }
    return temp;
}


std::string decrypt(std::string encryptedText, int n) {
    std::string firstPart, secondPart, temp = encryptedText;

    for (int i = 0; i < n; i++) {
        for (int j = encryptedText.length(); j >= 0; j--) {
            std::cout << temp[j];
        }
    }

    return encryptedText;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << encrypt("This is a test!", 1) << std::endl;
    std::cout << decrypt("hsi  etTi sats!", 1) << std::endl;
    std::string cow = "This is cool";
    std::string extra = "";

//    std::for_each(cow.begin(), cow.end(), [](){std::cout << "cool" << std::endl;});
    std::cout << extra << std::endl;

    std::vector<int> nums{3, 4, 2, 8, 15, 267};

    std::cout << "before:";
    for (auto const &n : nums) {
        std::cout << ' ' << n;
    }
    std::cout << '\n';

    std::for_each(nums.begin(), nums.end(), [](int &n) { n++; });
    std::cout << "after:";
    for (auto const &n : nums) {
        std::cout << ' ' << n;
    }
    std::cout << '\n';


    return 0;
}

