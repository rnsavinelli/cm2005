#include <iostream>

void print_menu();
int get_user_option();
void process_user_option(const int);

int main(void) {
    while(true) {
        print_menu();
        process_user_option(get_user_option());
    }
    return 0;
}

void print_menu() {
    std::cout << std::endl << "-----------------------" << std::endl << std::endl;
    std::cout << "1: Print help" << std::endl;
    std::cout << "2: Print exchange stats" << std::endl;
    std::cout << "3: Place an ask" << std::endl;
    std::cout << "4: Place a bid" << std::endl;
    std::cout << "5: Print wallet" << std::endl;
    std::cout << "6: Continue" << std::endl;
}

int get_user_option() {
    int __user_option = 0;
    std::cout << std::endl << ":: Select an option from the menu: ";
    std::cin >> __user_option;
    std::cout << std::endl;
    return __user_option;
}

void process_user_option(const int user_option){
    switch(user_option) {
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
};