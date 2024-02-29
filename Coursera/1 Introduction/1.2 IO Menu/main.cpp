#include <iostream>

int main(void)
{
    while(true) {

        int userOption = -1;

        std::cout << "Merkle Exchange" << std::endl << std::endl;

        // 1 - Print Help
        std::cout << "1: Print help" << std::endl;
        // 2 - Print Exchange Stats
        std::cout << "2: Print exchange stats" << std::endl;
        // 3 - Make an offer
        std::cout << "3: Make an offer" << std::endl;
        // 4 - Make a bid
        std::cout << "4: Make a bid" << std::endl;
        // 5 - Print Wallet
        std::cout << "5: Print wallet" << std::endl;
        // 6 - Continue
        std::cout << "6: Continue" << std::endl;
        // 7 - Exit
        std::cout << "7: Exit" << std::endl;

        std::cout << std::endl << "Chose an option 1-6: ";

        std::cin >> userOption;

        std::cout << "You chose: " << userOption << std::endl << std::endl;

        if(userOption == 1) {
            std::cout << "Help - your aim is to make money. Analyse the market and make bids and offers" << std::endl;
        }
        else if(userOption == 2) {
            std::cout << "Market looks good" << std::endl;
        }
        else if(userOption == 3) {
            std::cout << "Make an offer - enter the amount" << std::endl;
        }
        else if(userOption == 4) {
            std::cout << "Make a bid - enter the amount" << std::endl;
        }
        else if(userOption == 5) {
            std::cout << "Your wallet is empty" << std::endl;
        }
        else if(userOption == 6) {
            std::cout << "Going to next time frame" << std::endl;
        }
        else if(userOption == 7) {
            break;
        }
        // Bad option
        else {
            std::cout << "Invalid choice. Choose 1-6" << std::endl;
        }

        std::cout << std::endl;
    }
    return 0;
}
