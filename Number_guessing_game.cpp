// Number_Guessing_Game
#include <bits/stdc++.h>
using namespace std;
int main() 
{
  srand(time(0));
  int secretNumber = rand() % 100 + 1;
  int guess;
  cout << "I've generated a random number between 1 and 100. Try to guess it!" << endl;
  cin >> guess;
  while (guess != secretNumber)
  {
    if (guess < secretNumber)
    {
      cout << "Your guess is too low" << endl;
    } 
    else
    {
      cout << "Your guess is too high" << endl;
    }
    cout << "Try again ";
    cin >> guess;
  }
  cout << "Congratulations! You guessed the exact number!" << endl;
  return 0;
}
