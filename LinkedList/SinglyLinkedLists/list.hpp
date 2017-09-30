#ifndef LIST_HPP
#define LIST_HPP

#include <iostream>
#include "node.hpp"

template<typename T>
class List
{
public:
    List(): len(0), first(nullptr), last(nullptr) {}
    ~List();

    bool is_empty() const { return first == nullptr; }
    int  length()   const { return len; }

    void append(T item);
    void prepend(T item);

    void delete_first();
    void delete_last();

    void insert_after(int pos, const T& item);

    void output(std::ostream& out) const;
private:
    int len;
    Node<T>* first;
    Node<T>* last;
};


// List destructor
template<typename T>
List<T>::~List()
{
    Node<T>* temp;
    while(first) {
        temp = first->next;
        delete first;
        first = temp;
    }
}

// insert item after position
template<typename T>
void List<T>::insert_after(int pos, const T& item)
{
    if (pos < 0) throw std::out_of_range("out of bounds");

    Node<T>* current = first;

    for (int i = 1; i < pos && current != nullptr; i++)
        current = current->next;

    if (pos > 0 && current == nullptr) throw std::out_of_range("no node at position");

    Node<T>* new_node = new Node<T>;
    new_node->data = item;

    if (pos) {
        new_node->next = current->next;
        current->next = new_node;
    } else {
        new_node->next = first;
        first = new_node;
    }
}

// append to the end of the list
template<typename T>
void List<T>::append(T item)
{
    Node<T>* oldLast = last;
    last = new Node<T>;
    last->data = item;
    last->next = nullptr;

    if (is_empty()) first = last;
    else oldLast->next = last;

    len++;
}

// prepend at the beginning
template<typename T>
void List<T>::prepend(T item)
{
    Node<T>* new_node;
    new_node->data = item;
    new_node->next = first;
    first = new_node;
    len++;
}

// deletes the first node of the list
template<typename T>
void List<T>::delete_first(){
    if (is_empty()) throw std::out_of_range("Empty list");

    Node<T>* old_first = first;
    first = first->next;
    delete old_first;
    len--;
}

// deletes the last element of the list
template<typename T>
void List<T>::delete_last(){
    if (is_empty()) throw std::out_of_range("Empty list");

    if(first->next == nullptr) {
        delete first;
        first = nullptr;
        last = nullptr;
        len--;
        return;
    }

    Node<T>* current = first;
    while (current->next && current->next->next) {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;
    last = current;

    len--;
}

template<typename T>
void List<T>::output(std::ostream& out) const
{
    for (Node<T>* current = first; current; current = current->next)
        out << current->data << " ";
}

template<typename T>
std::ostream& operator<<(std::ostream& out, const List<T>& list)
{
    list.output(out);
    return out;
}

#endif // LIST_HPP