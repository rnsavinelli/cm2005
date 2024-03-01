#include <iostream>

int main(void) {
    std::cout << ":: Merklerex" << std::endl;

    while(true) {
        std::cout << std::endl;
        std::cout << "1: Print help" << std::endl;
        std::cout << "2: Print exchange stats" << std::endl;
        std::cout << "3: Place an ask" << std::endl;
        std::cout << "4: Place a bid" << std::endl;
        std::cout << "5: Print wallet" << std::endl;
        std::cout << "6: Continue" << std::endl;

        int userOption = 0;
        std::cout << std::endl << ":: Type in 1-6: ";
        std::cin >> userOption;

        std::cout << std::endl << ":: Your selection: " << userOption << std::endl << std::endl;

        switch(userOption) {
            case(1):
                std::cout << "Help - choose options from the menu" << std::endl;
                std::cout << "and follow the on screen instructions." << std::endl;
                break;
            case(2):
                std::cout << "Print exchange stats - Market looks good" << std::endl;
                break;
            case(3):
                std::cout << "Place an ask - Enter the amount" << std::endl;
                break;
            case(4):
                std::cout << "Place an bid - Enter the amount" << std::endl;
                break;
            case(5):
                std::cout << "Print wallet - Your wallet is empty" << std::endl;
                break;
            case(6):
                std::cout << "Continue - Going to the next time frame" << std::endl;
                break;
            default:
                std::cout << "Error - Invalid selection" << std::endl;
                break;
        }
    }

    return 0;
}
