#include <iostream>
#include <map>
#include <string>
#include <stdlib.h>
#include <time.h>
//#include <random>
using namespace std;

int main() {
    map<int, string> vals;

    vals.insert(make_pair(1, "ROCK"));
    vals.insert(make_pair(2, "PAPER"));
    vals.insert(make_pair(3, "SCISSORS"));

    std::cout << "1 = ROCK\n2 = PAPER\n3 = SCISSORS\n";

    int choice;

    std::cout << "Enter your choice (1, 2, 3): ";
    std::cin >> choice;

    srand(time(NULL));
    int comp_choice = rand() % 3 + 1;

    string result;

    switch(choice) {
        case 1:
            switch(comp_choice){
                case 1:
                    result = "drew";
                    break;
                case 2:
                    result = "lost";
                    break;
                case 3:
                    result = "won";
                    break;
            }
            break;
        case 2:
            switch(comp_choice){
                case 1:
                    result = "won";
                    break;
                case 2:
                    result = "drew";
                    break;
                case 3:
                    result = "lost";
                    break;
            }
            break;
        case 3:
            switch(comp_choice){
                case 1:
                    result = "lost";
                    break;
                case 2:
                    result = "won";
                    break;
                case 3:
                    result = "drew";
                    break;
            }
            break;
        default:
            std::cout << "Not a valid option\n";
            return 0;
    }

    std::cout << "You chose " << vals[choice] << ".\n";
    std::cout << "The computer chose " << vals[comp_choice] << ".\n";
    std::cout << "You " << result << "!\n";

    return 0;
}