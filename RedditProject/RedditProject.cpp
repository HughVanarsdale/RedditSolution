// RedditProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <fstream>
#include "399CountLetters.h"
using namespace std;

int main()
{
   int getInput{ 0 };

   do {

      cout << "****************************************************************************************\n";
      cout << "****************************************************************************************\n";
      cout << "*     Pick a number below, zero to exit ************************************************\n";
      cout << "*     399: Letter value sum             ************************************************\n";
      cout << "****************************************************************************************\n";
      cout << "****************************************************************************************\n";

      cin >> getInput;
      system("cls");
      if (getInput == 399) {
         LetterValueSum();
         system("pause");
      }
      
   } while (getInput != 0);
   return 0;
}

         string inLine = "";

         fstream fs;
         fs.open("C:\\Users\\hughv\\source\\c++\\Reddit00\\RedditSolution\\Data399.txt", ios::in);
         if (!fs) {
            cout << "file not opened\n";
         }
         else {
            int cnt = 0;
            while (getline(fs, inLine)) {
               cnt++;

               A_Word newWord;
               newWord.a_singleword = inLine;
               newWord.a_count = countLetters399(inLine);
               lstWords.push_back(newWord);
            }
         }
         fs.close();
         list<A_Word>::iterator it;
//1
         for (it = lstWords.begin(); it != lstWords.end(); it++) {
            if (it->a_count == 319) {
               cout << "Word with length 319: " << it->a_singleword << endl;
               break;
            }
         }
         system("pause");
//2
         399CountOdd();

//3
         list<popSizeCount> lstpsc;
         list<popSizeCount>::iterator itPop;
            
         bool found = false;
         for (it = lstWords.begin(); it != lstWords.end(); it++) {
            auto itNew = std::find_if(std::begin(lstpsc), std::end(lstpsc),
               [&](const popSizeCount v) { return 0 == (it->a_count == itPop->letterSum); });
               
            // Check if iterator points to end or not

            if (it != lstWords.end())
            {
               // It does not point to end, it means element exists in list
               found = true;
            }
            else {
               found = true;
            }
            if (found) {
               itPop->totalCount++;
            }
            else {
               popSizeCount addPop;
               addPop.letterSum = it->a_count;
               addPop.totalCount = 1;
               lstpsc.push_back(addPop);
            }
         }
         int iMax{ 0 };
         int saveCountLetters(0);

         for (itPop = lstpsc.begin(); itPop != lstpsc.end(); itPop++) {
            if (itPop->letterSum > iMax) {
               iMax = itPop->letterSum;
               saveCountLetters = itPop->totalCount;
            }
         }
         cout << "There are " << saveCountLetters << " occurances of highest letter sum: " << iMax << endl;
      }

   }
   while (getInput != 0);
 }



