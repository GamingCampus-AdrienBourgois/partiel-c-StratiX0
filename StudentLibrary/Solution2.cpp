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
    bool deposit = false, withdraw = false;

    file.open("BankAccount/" + accountName + ".txt");

    while (file >> word)
    {
        if (deposit)
        {
            bank += std::stof(word);
        }
        if (withdraw)
        {
            bank -= std::stof(word);
        }
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
    }
    file.close();
	return bank;
}

#endif
