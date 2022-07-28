// ========================================================================
// vector.h
// ========================================================================

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cstring>

template <typename OBJECT_TYPE>
class vector
{
public:
    vector() : currentSize(0), allocatedSize(1), arr(new OBJECT_TYPE[1]){};
    //alternative depends on size
    vector(size_t s) : currentSize{s}, allocatedSize(1), arr{new OBJECT_TYPE[1]}{};

    // Copy Constructor
    vector(const vector &obj)
    {
        currentSize = obj.currentSize;
        allocatedSize = obj.allocatedSize;
        OBJECT_TYPE *temp = new OBJECT_TYPE[obj.allocatedSize];
        for(size_t i = 0; i < obj.currentSize; ++i)
        {
            temp[i] = obj.arr[i];
        }
        arr = temp;
        temp = nullptr;
    }

    // Move Constructor
    vector(vector&& obj) noexcept
    {
        currentSize = obj.currentSize;
        allocatedSize = obj.allocatedSize;
        arr = obj.arr;
        obj.currentSize = 0;
        obj.allocatedSize = 0;
        obj.arr = nullptr;
    }

    // Copy Assignment
    vector& operator=(const vector& obj)
    {
        if(this != &obj)
        {
        OBJECT_TYPE *temp = new OBJECT_TYPE[obj.allocatedSize];
        for(size_t i = 0; i < obj.currentSize; ++i)
        {
            temp[i] = obj.arr[i];
        }
        delete [] arr;
        arr = temp;
        currentSize = obj.currentSize;
        allocatedSize = obj.allocatedSize;
        }
        return *this;
    }

    // Move assignemnt
    vector& operator=(vector&& obj) noexcept
    {
        if(this != & obj)
        {
        delete[] arr;
        arr = std::move(obj.arr);
        currentSize = obj.currentSize;
        allocatedSize = obj.allocatedSize;
        obj.currentSize = 0;
        obj.allocatedSize = 0;
        obj.arr = nullptr;
        }
        return *this;
    }

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

    OBJECT_TYPE* begin()
    {
        return &arr[0];

    }

    OBJECT_TYPE* end()
    {
        return &arr[allocatedSize];

    }

private:
    size_t currentSize;
    size_t allocatedSize;
    OBJECT_TYPE *arr = nullptr;
};

#endif // VECTOR_H
