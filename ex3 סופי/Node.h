#pragma once
using namespace std;
template <class T>
class Node
{
	T data;
	Node<T>* Next;
public:
	Node(T data) {
		this->data = data;
		this->Next = nullptr;
	};
	Node() {
		Next = nullptr;
		data = NULL;
	}; //default constructor
	Node<T>* getNext() const {
		return Next;
	};
	T getdata() const {
		
		return data;
	};
	void setNext(Node<T>* Next) {
		this->Next = Next;
	};
	~Node() {};
};

