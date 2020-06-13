/**
 * Program explanation here
 * @author Wisdom Nolitse
 * @version 30 March 2020
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * documentation here
 */
size_t hashx(const string& key, size_t table_size);

int main()
{
	string word;
	vector<string> words(0);
	while (getline(cin, word))
	{
		// do something with the word
		cout << word << endl;
		words.push_back(word);
	}
	vector<string> table(0);
	return 0;
}

size_t hashx(const string& key, size_t table_size)
{
	size_t hash_value = 0;
	for (auto character : key)
	{
		hash_value = 37 * hash_value + static_cast<unsigned char>(character);
	}
	return hash_value % table_size;
}