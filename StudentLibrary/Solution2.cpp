#include "Solution2.h"

#include <ostream>
#include <iostream>
#include <fstream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2

float Solution2::GetBalance(const std::string& accountName)
{
    float bank = 0.f;
    std::fstream file;
    std::string word, filename;
    bool deposit, withdraw;

    file.open("BankAccount/" + accountName + ".txt");

    while (file >> word)
    {
        withdraw = false;
        deposit = false;
        if (word == "DEPOSIT")
        {
            deposit = true;
            withdraw = false;

        }
        if (word == "WITHDRAW")
        {
            withdraw = true;
            deposit = false;
        }
        if (deposit)
        {
            bank += std::stof(word);
        }
        if (withdraw)
        {
            bank -= std::stof(word);
        }
    }
    file.close();
	return bank;
}

#endif
