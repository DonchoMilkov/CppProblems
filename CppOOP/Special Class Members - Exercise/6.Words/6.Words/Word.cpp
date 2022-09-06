#include "Word.h"

std::map<std::string, int> Word::_words;

Word::Word(const std::string& str) : _word(str) {
	_words[_word]++;
}

int Word::getCount() const {
	int count = _words[_word];
	_words.erase(_word);
	return count;
}