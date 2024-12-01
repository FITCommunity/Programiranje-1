#include<iostream>
#include<ctime>
#include<cstddef>

const char* const lineBreak{ "\n===================================================\n" };

int getRandomValue(int from, int to) {
    return std::rand() % (to - from + 1) + from;
}

int drawCard() {
    return getRandomValue(1, 14);
}

int getInitialHard(int(&handArr)[7], std::size_t& size) {
    int handArrSum{ 0 };

    handArr[0] = drawCard();
    handArr[1] = drawCard();

    handArrSum += handArr[0];
    handArrSum += handArr[1];

    size = 2;

    return handArrSum;
}

void printHand(int(&handArr)[7], const std::size_t size) {
    std::cout << "Vase trenutne karte su:\n";
    for (std::size_t i = 0; i < size; ++i) {
        std::cout << handArr[i] << " ; ";
    }
    std::cout << lineBreak;
}

int main() {
    std::srand(std::time(nullptr));

    char continueGame{};
    int handArr[7]{ 0 };
    std::size_t handArrSize{};
    int handArrSum{ getInitialHard(handArr, handArrSize) };

    printHand(handArr, handArrSize);

    do {
        std::cout << "Ako zelite jos karti pritisnite 'y', ako ne zelite pritisnite 'n'\n";
        std::cin >> continueGame;

        if (continueGame == 'y') {
            handArr[handArrSize] = drawCard();
            handArrSum += handArr[handArrSize];
            ++handArrSize;
            printHand(handArr, handArrSize);
        }
    } while (continueGame != 'n' && handArrSize != std::size(handArr) && handArrSum <= 21);

    if (handArrSize == std::size(handArr)) {
        std::cout << "Pobjedili ste posto ste izvukli maksimalan broj karti.";
    }
    else if (handArrSum >= 15 && handArrSum <= 21) {
        std::cout << "Pobjedili ste posto ste prekinuli igru sa sumom u intervalu [15, 21].";
    }
    else {
        std::cout << "Izgubili ste jer suma karti nije u intervalu [15, 21].";
    }
    std::cout << lineBreak;

    return 0;
}
