#ifndef Word_H
#define Word_H
#include<string>
#include<map>

class Word
{
private:
	std::string _word;
	static std::map<std::string, int> _words;

public:
	Word(const std::string& str);

	const std::string& getWord() const { return _word; }
	int getCount(void) const;

	bool operator < (const Word& other) const {
		return _word < other.getWord();
	};
};
#endif
