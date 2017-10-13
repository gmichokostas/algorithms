#ifndef INSERTION_HPP
#define INSERTION_HPP

#include <utility>

namespace Array
{
    template<typename T, unsigned N>
    constexpr unsigned size(const T (&)[N]) { return N; }
}

namespace Insertion
{
    namespace detail
    {
        template <typename T> bool less(const T& a, const T& b) { return a < b;  }
        template <typename T> void swap(T& container, const int i, const int j)
        {
            auto temp(std::move(container[i]));
            container[i] = std::move(container[j]);
            container[j] = std::move(temp);
        }
    }

    template <typename T> void sort(T& container)
    {
        unsigned len = Array::size(container);
        for (int i = 1; i < len; i++) {
            for (int j = i; j > 0 && detail::less(container[j], container[j-1]); j--)
                detail::swap(container, j, j-1);
        }
    }

    template <typename T> bool is_sorted(const T& container)
    {
        unsigned array_len = Array::size(container);
        for (int i = 1; i < array_len; i++)
            if (detail::less(container[i], container[i - 1]))
                return false;
    
        return true;
    }
}

#endif // INSERTION_HPP
