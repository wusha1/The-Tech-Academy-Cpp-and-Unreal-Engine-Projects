#include <iostream>

int main()
{
    // This program shows a do...while loop, which runs the code first and checks the condition afterwards. Here, the loop prints the numbers 1 through 5 before stopping when the condition becomes false.

    int count = 1;

    do
    {
        std::cout << "Count: " << count << "\n";
        count++;
    } while (count <= 5);

    return 0;
}