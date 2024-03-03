#include <iostream>

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

void print_help() {
    std::cout << "Help - choose options from the menu" << std::endl;
    std::cout << "and follow the on screen instructions." << std::endl;
}

void print_exchange_stats() {
    std::cout << "Print exchange stats - Market looks good" << std::endl;
}

void enter_offer() {
    std::cout << "Place an ask - Enter the amount" << std::endl;
}

void enter_bid() {
    std::cout << "Place an bid - Enter the amount" << std::endl;
}

void print_wallet() {
    std::cout << "Print wallet - Your wallet is empty" << std::endl;
}

void go_to_next_time_frame() {
    std::cout << "Continue - Going to the next time frame" << std::endl;
}

void print_invalid_selection() {
    std::cout << "Error - Invalid selection" << std::endl;
}

void process_user_option(const int user_option){
    switch(user_option) {
        case(1):
            print_help();
            break;
        case(2):
            print_exchange_stats();
            break;
        case(3):
            enter_offer ();
            break;
        case(4):
            enter_bid();
            break;
        case(5):
            print_wallet();
            break;
        case(6):
            go_to_next_time_frame();
            break;
        default:
            print_invalid_selection();
            break;
    }
}

int main(void) {
    while(true) {
        print_menu();
        process_user_option(get_user_option());
    }
    return 0;
}