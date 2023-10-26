#pragma once
#include "Node.h"
#include <exception>
#include <iostream>
using namespace std;

template <class T>
class LinkedList
{
	Node<T>* head;

public:
	LinkedList() { head = nullptr; }// � A default constructor that creates an empty linked list.

	void insert(const T& a) {
		Node<T>* temp = new Node<T>(a);//making a new pointer node
		temp->setNext(head);
		head = temp;//insert infront of the list

	}

	T deleteNode() noexcept(false) {
		if (this->IsEmpty()) {
			throw runtime_error("The list is empty");
			
		}
	
		T val = head->getdata();
		Node<T>* temp = head->getNext();
		delete head;
		head = temp;
		return val;
	}
	// - This method should delete the first Node in the list(the last inserted
		//Node) and return the data member of this Node.In case the list is empty, the function
	//throws an exception.
	T deleteNode(const T& data) noexcept(false) {
		Node<T>* curr = head;
		Node<T>* prev = nullptr;
		T temp;
		while (curr != nullptr) {
			if (curr->getdata() == data) {
				if (prev != nullptr) {
					temp = curr->getdata();
					prev->setNext(curr->getNext());
				}
				else {
					head = curr->getNext();
					temp = curr->getdata();
					delete prev;
				}
				delete curr;
				return temp;
			}
			prev = curr;
			curr = curr->getNext();
		}


		throw runtime_error("Data not found in the list");
		return NULL;


	}
	bool search(const T& data) {
		Node<T>* temp = head;
		while (temp != nullptr) {
			if (temp->getdata() == data) {
				return true;
			}
			temp = temp->getNext();
		}
		return false;
	}// - This method should search for the first occurrence of a Node with the
	//given data in the linked list.If the Node is found, the method should return true.Otherwise,
	//it should return false.
	const T& getTop() const noexcept(false) {
		if (this->IsEmpty()) {
			throw runtime_error("The list is empty");
			
		}

		return head->getdata();
	}//- Return the last inserted element(data) in the list.
	friend std::ostream& operator<<(std::ostream& out, const LinkedList<T>& list) {
		Node<T>* temp = list.head;
		while (temp != nullptr) {
			out << temp->getdata() << " ";
			temp = temp->getNext();
		}

		//-insertion operator should print the Nodes of the linked list.
		out << endl;

		return out;
	}
	bool IsEmpty() const {
		if (head == nullptr) {
			return true;
		}
		return false;
	}
	~LinkedList() {
		Node<T>* curr = head;
		while (curr != nullptr) {
			Node<T>* temp = curr;
			curr = curr->getNext();
			delete temp;

		}
	}
};

