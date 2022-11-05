
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <fstream>
#include "399CountLetters.h"

using namespace std;


namespace reddit {
   class Reddit399 {
      void LetterValueSum()
      {
         string sPass[] = { {""},{"a"},{"z"},{"cab"},{"excellent"},{"microspectrophotometries"} };
         int count{ 0 };

         for (string s : sPass) {
            count = countLetters399(s);
            cout << "lettersum(\"" << s << "\") = > " << to_string(count) << endl;
         }
      }

      void 399ReadInData() {

      }

      int countLetters399(const string& sWord) {
         int sum{ 0 };

         for (char const& c : sWord) {
            sum += (int)c - 96;
         }

         return sum;
      }

      list<A_Word>::iterator it;
      list<A_Word> lstWords;

      int 399CountOdd() {
         for (it = lstWords.begin(); it != lstWords.end(); it++) {
            if (it->a_count == 319) {
               cout << "Word with length 319: " << it->a_singleword << endl;
               break;
            }
         }
         system("pause");
      }
   }
}