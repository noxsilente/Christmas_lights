#include "Christmas.h"
Christmas lights(3, 6, 5);// use the pins 3 for red, 6 for green, 5 for blue
void setup() {
  /*NULL = do the action 1 time, 
   * otherwise you can put a number for determine 
   * how many times it have to do the requested action
  */
  lights.blinky(NULL);
  lights.blinky_obo(NULL);
  lights.fade_all(NULL);
  lights.fade_obo(NULL);

}
void loop() {

}

