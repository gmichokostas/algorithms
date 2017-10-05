#ifndef SELECTION_HPP
#define SELECTION_HPP

namespace Array {
    template<typename T, unsigned N>
    constexpr unsigned size(const T (&)[N]) { return N; }
}

template <typename T>
class Selection
{
public:
    template <typename U> void sort(U& container);
    template <typename U> bool is_sorted(const U& container) const;

private:
    template <typename U> void swap(U& container, const int i, const int j);
    bool less(T a, T b) const { return a < b; }
};

template <typename T>
template<typename U>
void Selection<T>::sort(U& container)
{
    unsigned array_len = Array::size(container);
    for (int i = 0; i < array_len; i++) {
        int min = i;
        for (int j = i+1; j < array_len; j++)
            if (less(container[j], container[min])) min = j;
        swap(container, i, min);
    }
}

template<typename T>
template<typename U>
bool Selection<T>::is_sorted(const U& container) const
{
    unsigned array_len = Array::size(container);
    for (int i = 1; i < array_len; i++)
        if (less(container[i], container[i - 1]))
            return false;

    return true;
}

template<typename T>
template <typename U>
void Selection<T>::swap(U& container, const int i, const int j)
{
    T temp = container[i];
    container[i] = container[j];
    container[j] = temp;
}

#endif // SELECTION_HPP


