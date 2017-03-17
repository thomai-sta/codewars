#include <queue>
#include <cmath>
#include <vector>
#include <iostream>

std::vector<long> numbersWithDigitInside(long x, long d)
{
  std::vector<long> result;

  int count = 0;
  int sum = 0;
  long product = 1;
  bool contains;

  for (int i = 1; i <= x; i++)
  {
    /// Check if i contains digit
    contains = false;
    int temp = i;
    while(temp)
    {
      if (temp % 10 == d)
      {
        contains = true;
        break;
      }
      temp /= 10;
    }

    if (contains)
    {
      count++;
      sum += i;
      product *= i;
    }
  }

  result.push_back(count);
  result.push_back(sum);
  if (count == 0)
  {
    result.push_back(0);
  }
  else
  {
    result.push_back(product);
  }

  return result;
}


int main()
{
  std::vector<long> res = numbersWithDigitInside(44, 4);
  std::cout << "[" << res[0] << ", " << res[1] << ", " << res[2] << "]\n";

  return 1;
}