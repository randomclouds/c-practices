#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

#include <iostream>
#include <string>

//int main() {
//    char op = 0;
//    int o[2] = { 0 };
//    int j = 0;
//    std::string input;
//    std::getline(std::cin, input);
//
//    for (char a : input) {
//        if (a != ' ') {
//            if (a < '0') {
//                j--;
//                op = a;
//            }
//            else o[j] = o[j] * 10 + a - '0';
//        }
//        else j++;
//    }
//
//    switch (op) {
//    case '+':
//        std::cout << o[0] + o[1] << std::endl;
//        break;
//    case '-':
//        std::cout << o[0] - o[1] << std::endl;
//        break;
//    case '*':
//        std::cout << o[0] * o[1] << std::endl;
//        break;
//    case '/':
//        std::cout << o[0] / o[1] << std::endl;
//        break;
//    case '%':
//        std::cout << o[0] % o[1] << std::endl;
//        break;
//    }
//    return 0;
//}