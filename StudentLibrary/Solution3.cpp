#include "Solution3.h"

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"

#include <algorithm>

#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
	std::vector<std::string> list;
	for (int i = 0; i < sizeof(words); i++)
	{
		list.push_back(words[i]);
	}
	words = list;
}

void Solution3::SortWords() { std::sort(words.begin(), words.end()); }

std::vector<std::string> Solution3::GetSortedWords() const
{
	return words;
}

#endif
