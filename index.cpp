#include <iostream>
#include <math.h>

int main()
{
  size_t numbers[4];
  for (size_t i = 0; i < 4; i++)
  {
    do
    {
      std::cout << "number " << i << " : ";
      std::cin >> numbers[i];
    } while (((i == 0 || i == 2) && !(numbers[i] >= 1 && numbers[i] <= pow(10, 7))) || (i == 1 || i == 3) && !(numbers[i] >= 1 && numbers[i] <= pow(10, 12)));
  }
  if (pow(numbers[0], numbers[1]) > pow(numbers[2], numbers[3]))
    std::cout << "Yes";
  if (pow(numbers[0], numbers[1]) < pow(numbers[2], numbers[3]))
    std::cout << "No";
    return 0;
}