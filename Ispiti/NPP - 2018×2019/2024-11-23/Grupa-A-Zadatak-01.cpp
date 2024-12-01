#include<iostream>
#include<cmath>

bool isValid(int x, int base) {
    x = std::abs(x);

    while (x != 0) {
        const int digit{ x % 10 };

        if (digit >= base) {
            return false;
        }

        x /= 10;
    }

    return true;
}

int toDecimal(int x, int base) {
    int decimalNumber{ 0 };

    int positionalWeight{ 1 };

    while (x != 0) {
        const int digit{ x % 10 };

        decimalNumber += positionalWeight * digit;

        positionalWeight *= base;
        x /= 10;
    }

    return decimalNumber;
}

void enterBase(int& base) {
    do {
        std::cout << "Unesite bazu: ";
        std::cin >> base;

        if (base < 2 || base > 10) {
            std::cout << "Unos treba biti baza u intervalu [2, 10]\n";
        }
    } while (base < 2 || base > 10);
}

void enterValue(int& value, const int base) {
    bool repeatLoop{};

    do {
        repeatLoop = false;

        std::cout << "Unesite broj u bazi " << base << ": ";
        std::cin >> value;

        if (value < 0) {
            std::cout << "Unos ne smije biti negativan broj\n";
            repeatLoop = true;
        }
        else if (!isValid(value, base)) {
            std::cout << "Unos " << value << " nije validan za bazu " << base << ", unesite ponovo\n";
            repeatLoop = true;
        }
    } while (repeatLoop);
}

int main() {
    int base{};
    int value{};

    enterBase(base);
    enterValue(value, base);

    std::cout << "Uneseni broj " << value << "(" << base << ") u decimalnom sistemu je -> ";
    std::cout << toDecimal(value, base) << '\n';

    return 0;
}
