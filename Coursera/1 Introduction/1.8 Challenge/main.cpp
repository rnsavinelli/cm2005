#include <iostream>
#include <map>

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

void help() {
    std::cout << "Help - choose options from the menu" << std::endl;
    std::cout << "and follow the on screen instructions." << std::endl;
}

void exchange_stats() {
    std::cout << "Print exchange stats - Market looks good" << std::endl;
}

void offer() {
    std::cout << "Place an ask - Enter the amount" << std::endl;
}

void bid() {
    std::cout << "Place an bid - Enter the amount" << std::endl;
}

void wallet() {
    std::cout << "Print wallet - Your wallet is empty" << std::endl;
}

void next_time_frame() {
    std::cout << "Continue - Going to the next time frame" << std::endl;
}

void invalid_selection() {
    std::cout << "Error - Invalid selection" << std::endl;
}

void process_user_option(const int user_option, std::map<int, void(*)()>menu){
    if(user_option >= 1 && user_option <= 6) {
        menu[user_option]();
    }
    else {
        menu[0]();
    }
}

std::map<int, void(*)()> build_menu() {
    std::map<int,void(*)()> __menu;

    __menu[0] = invalid_selection;
    __menu[1] = help;
    __menu[2] = exchange_stats;
    __menu[3] = offer;
    __menu[4] = bid;
    __menu[5] = wallet;
    __menu[6] = next_time_frame;

    return __menu;
}

int main(void) {
    // function pointers technique
    std::map<int, void(*)()> menu = build_menu();

    while(true) {
        print_menu();
        process_user_option(get_user_option(), menu);
    }
    return 0;
}
