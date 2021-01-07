#ifndef Christmas_h
#define Christmas_h
#include "Arduino.h"

class Christmas{
  public: 
  Christmas(int r, int g, int b);
  void blinky(int n);
  void fade_all(int n);
  void blinky_obo(int n);
  void fade_obo (int n);
  private:
  int _r;
  int _g;
  int _b;
};
#endif
