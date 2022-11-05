#pragma once
#include <string>
using namespace std;

namespace reddit {
   class Reddit399 {

      struct A_Word {
      public:
         string a_singleword = "";
         int a_count{ 0 };
      };

      struct popSizeCount {
      public:
         int letterSum{ 0 };
         int totalCount{ 0 };
      };

      void Driver_399_A();
      int countLetters(const std::string& sWord);
      int CountOdd();
      void ReadInData();
   };
}
