#include "List.h"
#include <sstream>

List::Node::Node(int _value, Node* _prev, Node* _next) : value(_value), prev(_prev), next(_next) {};

int List::Node::getValue() const {
	return this->value;
};

void List::Node::setValue(int _value) {
	this->value = _value;
};

List::Node* List::Node::getNext() const {
	return this->next;
}

void List::Node::setNext(Node* _next) {
	this->next = _next;
}

List::Node* List::Node::getPrev() const {
	return this->prev;
}

void List::Node::setPrev(Node* _prev) {
	this->prev = _prev;
}

List::List() : head(nullptr), tail(nullptr), size(0) {}

List::List(const List& other) {
	head = nullptr;
	tail = nullptr;
	size = 0;
	this->addAll(other);
}

int List::first() const {
	return this->head->getValue();
}

void List::add(int value) {
	if (this->isEmpty()) {
		this->head = new Node(value, nullptr, nullptr);
		this->tail = this->head;
	}
	else {
		Node* added = new Node(value, this->tail, nullptr);
		this->tail->setNext(added);
		this->tail = added;
	}

	this->size++;
}
void List::addAll(const List& other) {
	for (Node* node = other.head; node != nullptr; node = node->getNext()) {
		this->add(node->getValue());
	}
}

void List::removeFirst() {
	if (!this->isEmpty()) {
		Node* oldHeadElement = this->head;

		if (this->head != this->tail) {
			this->head = this->head->getNext();
			this->head->setPrev(nullptr);
		}
		else {
			this->head = nullptr;
			this->tail = nullptr;
		}

		delete oldHeadElement;

		this->size--;
	}
}

void List::removeAll() {
	while (!this->isEmpty()) {
		this->removeFirst();
	}
}

size_t List::getSize() const {
	return this->size;
}

bool List::isEmpty() const {
	return this->size <= 0;
}

//static
List List::getReversed(List l) {
	List reversed;
	for (Node* node = l.tail; node != nullptr; node = node->getPrev()) {
		reversed.add(node->getValue());
	}

	return reversed;
}

std::string List::toString() const {
	std::ostringstream output;
	const Node* curr = this->head;
	while (true)
	{
		output << curr->getValue();
		if (curr->getNext() == nullptr)
			break;
		output << " ";
		curr = curr->getNext();
	}
	return output.str();
}

List& List::operator<<(const int& value) {
	this->add(value);
	return *this;
}

List& List::operator<<(const List& other) {
	this->addAll(other);
	return *this;
}

List& List::operator=(const List& other) {
	this->removeAll();
	this->addAll(other);
	return *this;
}

List::~List() {
	this->removeAll();
}
