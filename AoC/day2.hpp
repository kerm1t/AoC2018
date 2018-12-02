#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
#include "functions.h"

namespace AoC
{
  class day2
  {

    int part1()
    {
      std::string filename = "..\\day2.txt";

      std::ifstream f(filename);
      std::string line;

      int occurrence[26]; // 26, but Ord
      int num_occ[10];
      int num_occ_glob[10];
      if (f)
      {
        for (int i = 0; i < 10; i++) num_occ_glob[i] = 0; // init once
        while (std::getline(f, line))
        {
          for (int i = 0; i < 26; i++) occurrence[i] = 0; // init each line
          for (int i = 0; i < 10; i++) num_occ[i] = 0; // init each line

          for (int i = 0; i < line.size(); i++)
          {
            char c = line[i];
            int ord = c-97; // 'a' = 97
            occurrence[ord]++;
          }
          for (int i = 0; i < 26; i++) // we need this step, as each occurrence taken only once
          {
            int num = occurrence[i];
            num_occ[num] = 1;
          }
          for (int i = 1; i < 10; i++) // not use 0 ... actually we need only 'two' and 'three'
          {
            num_occ_glob[i] += num_occ[i];
          }
        }
        int prod = 1;
        for (int i = 2; i < 10; i++) // do not multiply with 0, not interested in single occurrences
        {
          if (num_occ_glob[i] > 0)
          {
            prod = prod * num_occ_glob[i];
          }
        }
        std::cout << prod << std::endl;
      }

      return 0;
    }

    int part2()
    {
      std::string filename = "..\\day2.txt";

      std::vector<std::string> v;
      std::ifstream f(filename);
      std::string line;

      if (f)
      {
        while (std::getline(f, line))
        {
          v.push_back(line);
          // geordnete menge
        }
        std::cout << v.size() << " lines read." << std::endl;
      }
      return 0;
    }
  public:
    void test()
    {
//      part1();

      part2();
    }
  };
}
