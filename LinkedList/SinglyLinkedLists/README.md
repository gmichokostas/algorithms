### Singly Linked List

class List implements a [Singly Linked List](https://en.wikipedia.org/wiki/Linked_list)
It provides the following functionality

- `bool is_empty() const;` checks if the list is empty.
- `int length() const;` returns the length of the list.
- `void append(T item);` append at the end of the list.
- `void prepend(T item);` prepend at the begging of the list
- `void delete_first();` deletes first node.
- `void delete_last();` delets last node
- `void insert_after(int pos, const T& item);` insert after position
- `void output(std::ostream& out) const;` custom string representation