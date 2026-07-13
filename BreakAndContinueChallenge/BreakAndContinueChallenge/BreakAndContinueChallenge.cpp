#include <iostream>

int main()
{
    // This program shows how the break and continue statements work in a while loop. The continue statement skips over the number 3, while the break statement stops the loop completely once the count reaches 8.

    int count = 0;

    while (count < 10)
    {
        count++;

        if (count == 3)
        {
            continue;
        }

        if (count == 8)
        {
            break;
        }

        std::cout << "Count: " << count << "\n";
    }

    return 0;
}