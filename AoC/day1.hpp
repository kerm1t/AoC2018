#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
#include "functions.h"

namespace AoC
{
  class day1
  {

    int part1()
    {
      std::string filename = "..\\day1.txt";
      std::vector<std::string> v;
//      int nlines = file2vec(f, v);

      std::ifstream f(filename);
      std::string line;

      if (f)
      {
        while (std::getline(f, line))
        {
          v.push_back(line);
        }
      }

      int sum = 0;
      for (std::vector<std::string>::iterator it = v.begin(); it != v.end(); ++it)
      {
        std::string s = *it;
        char op = s[0];
        int num = atoi(s.substr(1).c_str());
        if (op == '+') sum += num;
        if (op == '-') sum -= num;
      }
      std::cout << v.size() << " lines parsed. result = " << sum << std::endl;
      return 0;
    }

    int part2()
    {
      std::string filename = "..\\day1.txt";
      std::vector<std::string> v;
      std::vector<int> vfreqs;

      std::ifstream f(filename);
      std::string line;

      if (f)
      {
        while (std::getline(f, line))
        {
          v.push_back(line);
        }
      }

      int freq = 0;
      int i = 0;
      int turn = 0;
      bool found = false;
      while (!found)
      {
        std::string s = v[i];
        char op = s[0];
        int num = atoi(s.substr(1).c_str());
        if (op == '+') freq += num;
        if (op == '-') freq -= num;
        std::vector<int>::iterator itf = std::find(vfreqs.begin(), vfreqs.end(), freq);
        if (itf != vfreqs.end())
        {
          std::cout << "turn " << turn << ", freq " << freq << " found." << std::endl;
          found = true;
        }
        vfreqs.push_back(freq);
        i++;
        if (i == v.size())
        {
          turn++;
          std::cout << "turn " << turn << std::endl;
          i = 0;
        }
      }
      return 0;
    }
  public:
    void test()
    {
      part1();

      part2();
    }
  };
}
