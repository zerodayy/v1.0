#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

// Typing Game by zerodayy

int main ()
{
  int t1,t2,t;
  int result;
  char x[40];
  int current;
  int stop;
  current = time(NULL);
  stop = current + 2;
  printf("Welcome to the typing game \n");
  printf("Take yor time , the game will start in two seconds \n");
  while (1)
  {
    current = time(NULL);
    if (current >= stop)
      break;
  }
  printf("\nAre you really fast to play this game?\n");
  srand(time(NULL));
  t1 = time(NULL);
  scanf("%s",x);
  t2 = time(NULL);
  t = t2 - t1;
  result = strcmp(x,"yes");
  if ((result == 0) && (t < 1))
  {
    printf("Well , you're ready to play");
  }
  else
  {
    printf("you are not fast enough\n");
  }
  return 0;
}
