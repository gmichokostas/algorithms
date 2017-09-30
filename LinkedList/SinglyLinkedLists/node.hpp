#ifndef NODE_HPP
#define NODE_HPP

template<typename T>
class Node
{
    template<typename> friend class List;

private:
    T data;
    Node<T>* next;
};

#endif // NODE_HPP