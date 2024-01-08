#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>

int main()
{   
    std::map<std::string, int> m;
    std::string word;
	while (std::cin >> word)
	{
		for (auto& ch : word) 
			ch = tolower(ch);
		
		word.erase(remove_if(word.begin(), word.end(), [](char c){return ispunct(c);}),word.end());
		++m[word];
	}
	for (const auto& e : m) std::cout << e.first << " : " << e.second << "\n";
    return 0;
}