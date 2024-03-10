#include <iostream>
#include <string>
#include <cmath>

// Function to convert a number from any base to decimal
int anyBaseToDecimal(const std::string& number, int base) {
    int decimalValue = 0;
    int power = 0;
    for (int i = number.length() - 1; i >= 0; --i) {
        int digitValue;
        if (isdigit(number[i])) {
            digitValue = number[i] - '0';
        } else {
            digitValue = number[i] - 'A' + 10;
        }
        decimalValue += digitValue * pow(base, power);
        power++;
    }
    return decimalValue;
}

int main() {
    std::string number;
    int base;

    std::cout << "Enter the number: ";
    std::cin >> number;

    std::cout << "Enter the base of the number: ";
    std::cin >> base;

    int decimalValue = anyBaseToDecimal(number, base);

    std::cout << "Decimal value: " << decimalValue << std::endl;

    return 0;
}

