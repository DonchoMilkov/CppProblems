// 1.SentenceShifter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class Sentence {
private:
	vector<string> _sentence;

public:
	Sentence(istringstream& sentenceStream);

	string getShiftedSentence(size_t index);

};

Sentence::Sentence(istringstream& sentenceStream)
{
	string word;
	while (sentenceStream >> word)
		_sentence.push_back(word);
}

string Sentence::getShiftedSentence(size_t index)
{
	ostringstream output;
	int wordCount = _sentence.size();
	int wordIndex = wordCount - index;

	for (size_t i = 0; i < wordCount; i++)
	{
		if (wordIndex == wordCount)
			wordIndex = 0;

		output << _sentence[wordIndex]<<endl;
		wordIndex++;
	}

	return output.str();
}

int main()
{
	string input;
	getline(cin>>ws, input);

	istringstream inputStream(input);

	Sentence mySentence(inputStream);
	int ind;
	cin >> ind;

	cout << mySentence.getShiftedSentence(ind) << endl;

	return 0;
}
