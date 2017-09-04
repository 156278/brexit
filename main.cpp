#include <iostream>
#include <unistd.h>


int main() {
    std::string str1 = ">LOAD ''BREXIT''";
    for (int i = 0; i < str1.length();i++){
        std::cout << str1[i];
        sleep(1);
    }
    std::cout << std::endl;

    std::string str2 = ">RUN";
    for (int i = 0; i < str2.length();i++){
        std::cout << str2[i];
        sleep(1);
    }

    std::cout << std::endl << std::endl << std::endl << "**********************";
    std::cout << std::endl << "**  BREXIT          **";
    std::cout << std::endl << "**  NEGOTIATION     **";
    std::cout << std::endl << "**  SIMULATOR       **";
    std::cout << std::endl << "**  SIMULATOR       **";
    std::cout << std::endl << "**  AKA HOMEWORK    **";
    std::cout << std::endl << "**********************" << std::endl;

        sleep(1);

    while(true){
        std::cout << std::endl << "UK: THESE ARE OUR DEMANDS";
        sleep(1);
        std::cout << std::endl << "EU: LOL. FUCK OFF." << std::endl;
    }


    return 0;
}