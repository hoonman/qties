// ========================================================================
// vector.h
// ========================================================================

#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cstring>

//!  A vector class
/*!
 *  implement as a dynamic container to store shapes
 */

template <typename OBJECT_TYPE>
class vector
{
public:
    //! Default constructor
    /*!
     *  Initialized currentSize, allocatedSize, and arr.
     */
    vector() : currentSize(0), allocatedSize(1), arr(new OBJECT_TYPE[1]){};

    //! Nondefault constructor
    /*!
     *  \param s initialized currentSIze to s
     */
    vector(size_t s) : currentSize{s}, allocatedSize(1), arr{new OBJECT_TYPE[1]}{};

    //! Copy constructor
    /*!
     *  \param &obj copy the data and store data into &obj
     */
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

    //! Move constructor
    /*!
     *  \param obj will move the data into &&obj
     */
    vector(vector&& obj) noexcept
    {
        currentSize = obj.currentSize;
        allocatedSize = obj.allocatedSize;
        arr = obj.arr;
    }

    //! Copy assignement
    /*!
     *  \param &obj copy the data in the shape object into &obj
        \return *this
     */
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
    //! Move assignement
    /*!
     *  \param &&obj copy the data in the shape object into &obj
     *  \return *this
     */
    vector& operator=(vector&& obj) noexcept
    {
        if(this != & obj)
        {
        delete[] arr;
        arr = std::move(obj.arr);
        currentSize = obj.currentSize;
        allocatedSize = obj.allocatedSize;
        }
        return *this;
    }

    //! destructor
    /*!
     *  delete arr
     */
    ~vector() { delete[] arr; };

    //! A function that will push the element and add a new obj in it
    /*!
     *  \param obj the object that will be add in
     */
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

    //! A function that will pop the element
    /*!
     *
     */
    void pop_back()
    {
        if (currentSize > 0)
        {
            currentSize--;
        }
    }

    //! A function that will tell the current size of the element
    /*!
     * \return currentSize
     */
    size_t size() const
    {
        return currentSize;
    }

    //! A function
    /*!
     * \param const size_t index
     * \return arr[index]
     */
    OBJECT_TYPE operator[](const size_t index) const
    {
        return arr[index];
    }

    //! A function
    /*!
     * \param const size_t index
     * \return arr[index]
     */
    OBJECT_TYPE &operator[](const size_t index)
    {
        return arr[index];
    }

    //! A function that will return the obj that's in the first element
    /*!
     * \return &arr[0]
     */
    OBJECT_TYPE* begin()
    {
        return &arr[0];

    }

    //! A function that will return the obj that's in the last element
    /*!
     * \return &arr[allocatedSize];
     */
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
