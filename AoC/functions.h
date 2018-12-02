#pragma once

#include <vector>
#include <string>
#include <fstream>
//#include <algorithm>
#include "stdint.h"

namespace AoC
{
/*
  int file2vec(const std::string filename, std::vector<std::string> res)
  {
    std::ifstream f(filename);
    std::string line;

    int nlines = 0;
    if (f)
    {
      while (std::getline(f, line))
      {
        res.push_back(line);
        nlines++;
      }
    }
    return nlines;
  }
*/
/*
  // Tokenizer, https://stackoverflow.com/questions/53849/how-do-i-tokenize-a-string-in-c
  std::vector<std::string> split(const char *str, char c = ' ')
  {
    std::vector<std::string> result;

    do
    {
      const char *begin = str;

      while (*str != c && *str)
        str++;

      result.push_back(std::string(begin, str));
    } while (0 != *str++);

    return result;
  }

  // https://stackoverflow.com/questions/18267407/check-whether-two-strings-are-anagrams-c
  bool is_anagram(std::string s1, std::string s2)
  {
    std::sort(s1.begin(), s1.end());
    std::sort(s2.begin(), s2.end());
    return s1 == s2;
  }
*/
}