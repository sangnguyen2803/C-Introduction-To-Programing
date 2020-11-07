#include <stdio.h>
#include "functions.h"
#include <setjmp.h>

#define TRY do{ jmp_buf ex_buf__; if( !setjmp(ex_buf__) ){
#define CATCH } else {
#define ETRY } }while(0)
#define THROW longjmp(ex_buf__, 1)

int main()
{
  TRY
  {
    int score = 0, i;
    printf("---CTT003 MIDTERM TESTS---\n");
    int findab_tests[3][3] = {{35, 40, 1}, {20, 60, 2}, {10, 99, 3}};
    for (i=0; i<3; i++)
    {
      int answer = 0;
      if (findab(findab_tests[i][0], findab_tests[i][1]) == findab_tests[i][2])
      {
        answer = 1;
        score++;
      }
      printf("%s findab(%d, %d) = %d (Right Answer = %d)\n", (answer)?"PASS":"FAILED", findab_tests[i][0], findab_tests[i][1], findab(findab_tests[i][0], findab_tests[i][1]), findab_tests[i][2]);
    }
    printf("--------------------------\n");
    int bruteforce_tests[3][3] = {{100, 120, 5}, {150, 200, 8}, {20, 150, 0}};
    for (i=0; i<3; i++)
    {
      int answer = 0;
      if (bruteforce(bruteforce_tests[i][0], bruteforce_tests[i][1]) == bruteforce_tests[i][2])
      {
        answer = 1;
        score++;
      }
      printf("%s bruteforce(%d, %d) = %d (Right Answer = %d)\n", (answer)?"PASS":"FAILED", bruteforce_tests[i][0], bruteforce_tests[i][1], bruteforce(bruteforce_tests[i][0], bruteforce_tests[i][1]), bruteforce_tests[i][2]);
    }
    printf("--------------------------\n");
    int hailstone_tests[4][2] = {{3, 49}, {7, 288}, {11, 259}, {15, 694}};
    for (i=0; i<4; i++)
    {
      int answer = 0;
      if (hailstone(hailstone_tests[i][0]) == hailstone_tests[i][1])
      {
        answer = 1;
        score++;
      }
      printf("%s hailstone(%d) = %d (Right Answer = %d)\n", (answer)?"PASS":"FAILED", hailstone_tests[i][0], hailstone(hailstone_tests[i][0]), hailstone_tests[i][1]);
    }
    printf("--------------------------\n");
    printf("Well done!! You passed %d tests. \nHowever, remember that we will score you by the tests above AND other HIDDEN TESTS you cannot see here. \nGOOD LUCK!! ;) \n", score);
  }
  CATCH
  {
    printf("\n---Got Exception! --> YOUR SCORE = 0---\n");
    return 0;
  }
  ETRY;
}
