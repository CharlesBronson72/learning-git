#include <iostream>

void output(int (&arr)[10])
{
    std::cout << "Adresse des arr[]: " << &arr << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        std::cout << "Adresse der arr[" << i << "] : " << &arr[i] << "\tInhalt : " << arr[i] << "\n";
    }
    std::cout << std::endl;
}

int main()
{
    std::cout << "Hello, World!" << std::endl;
    int *a = new int[10]{};
    std::cout << "Adresse des Pointer a: " << a << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < 10; ++i)
    {
        a[i] = i;
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    delete[] a;

    std::cout << "Memory allocated and deallocated successfully." << std::endl;


    int arr[10] = {};
    std::cout << "Adresse des arr[]: " << arr << std::endl;
    output(arr);

    for (int i = 0; i < 10; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 0; i < 10; ++i)
    {
        arr[i] = i;
    }
    for (int i = 0; i < 10; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    output(arr);

    std::cout << "Array initialized successfully." << std::endl;

    return 0;
}
