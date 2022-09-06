#ifndef Sequence_H
#define Sequence_H

#include<vector>

template<class T, class Generator> class Sequence {
private:
	Generator generator;
	std::vector<T> generated;
public:
	class Iterator {
		const std::vector<T>& sequence;
		int currentIndes;
		Iterator(const std::vector<T>& _seq, int position) : sequence(_seq), currentIndes(position) {};
	public:
		static Iterator getBegin(const std::vector<T>& sequenceElements) {
			return Iterator(sequenceElements, 0);
		}
		static Iterator getEnd(const std::vector<T>& sequenceElements) {
			return Iterator(sequenceElements, -1);
		}

		Iterator& operator ++ () {
			currentIndes++;
			return *this;
		}

		const T& operator*() const {
			return sequence.at(currentIndes);
		}

		bool operator != (const Iterator& other) {
			return !(*this == other);
		}

		bool operator == (const Iterator& other) {
			if (sequence != other.sequence)
				return false;
			bool bothPositionsAreEnd = isEndIndex(currentIndes, sequence)
				&& isEndIndex(other.currentIndes, other.sequence);
			bool positionsMatch = currentIndes == other.currentIndes;
			return (bothPositionsAreEnd || positionsMatch);
		}
	private:
		static int isEndIndex(int index, const std::vector<T>& sequenceElements) {
			return index == -1 || index == sequenceElements.size();
		}
	};

public:
	void generateNext(int n) {
		for (size_t i = 0; i < n; i++)
		{
			generated.push_back(generator());
		}
	}

	Iterator begin() const {
		return Iterator::getBegin(generated);
	}
	Iterator end() const {
		return Iterator::getEnd(generated);
	}

};

#endif
