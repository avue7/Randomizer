#include <iostream>
#include <ctime>
#include <stdio.h>
#include <stdlib.h>

usiing namespace std;

class Randomizer(
  public:
    Randomizer();
    Randomizer(int min, int max);
    unsigned int Randomizer::randomBetween(unsigned int min, unsigned int max);
    int secret;
    int min;
    int max;
);

Randomizer(){
}

Randomizer(int min, int max){
  this->min = min;
  this->max = max;
}

unsigned int Randomizer::randomBetween(unsigned int min, unsigned int max){
  srand(time(NULL));
  if (min > max){
    // return min
  }
  else{
    this->secret = rand() % max + min;
  }
  return this->secret;
}

//tester
int main(){

}
