#include <iostream>

int main()
{
    // This shows a while loop, which repeatedly executes a chunk of code as long as its condition is true

    int count = 1;

    while (count <= 5)
    {
        std::cout << "Count: " << count << "\n";
        count++;
    }

    return 0;
}