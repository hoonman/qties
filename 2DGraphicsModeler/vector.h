#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cstring>

template <typename OBJECT_TYPE>
class vector
{
public:
    vector() : currentSize(0), allocatedSize(1), arr(new OBJECT_TYPE[1]){};

    ~vector() { delete[] arr; };

    void push_back(const OBJECT_TYPE obj)
    {
        if (currentSize == allocatedSize)
        {
            allocatedSize = allocatedSize << 1;
            OBJECT_TYPE *newArr = new OBJECT_TYPE[allocatedSize];
            std::memcpy(newArr, arr, currentSize * sizeof(OBJECT_TYPE));
            delete[] arr;
            arr = newArr;
        }
        arr[currentSize] = obj;
        currentSize++;
    }

    void pop_back()
    {
        if (currentSize > 0)
        {
            currentSize--;
        }
    }

    size_t size() const
    {
        return currentSize;
    }

    OBJECT_TYPE operator[](const size_t index) const
    {
        return arr[index];
    }

    OBJECT_TYPE &operator[](const size_t index)
    {
        return arr[index];
    }

private:
    size_t currentSize;
    size_t allocatedSize;
    OBJECT_TYPE *arr = nullptr;
};

#endif // VECTOR_H
