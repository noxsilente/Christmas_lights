#include "Arduino.h"
#include "christmas.h"
Christmas::Christmas(int r, int g, int b) {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  _r = r;
  _g = g;
  _b = b;
}
void Christmas::blinky(int n) {
  if (n == NULL)n = 1;
  for (int i = 0; i < n; i++) {
    analogWrite (_r, 255);
    analogWrite (_g, 200);
    analogWrite (_b, 200);
    delay(1000);
    analogWrite (_r, 0);
    analogWrite (_g, 0);
    analogWrite (_b, 0);
    delay(1000);
  }
}
void Christmas::fade_all(int n) {
  if (n == NULL)n = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 255; j++) {
      analogWrite (_r, j);
      if (j > 50) {
        analogWrite (_g, j);
        analogWrite (_b, j);
      }
      delay(15);
    }
    delay(1000);
    for (int j = 254; j > 0; j--) {
      analogWrite (_r, j);
      analogWrite (_g, j);
      analogWrite (_b, j);
      delay(15);
    }
    delay(1000);
  }
  
  analogWrite (_r, 0);
  analogWrite (_g, 0);
  analogWrite (_b, 0);
}
void Christmas::blinky_obo(int n) {
  if (n == NULL)n = 1;
  for (int i = 0; i < n; i++) {
    analogWrite (_r, 255);
    delay(250);
    analogWrite (_r, 0);
    analogWrite (_g, 255);
    delay(250);
    analogWrite (_g, 0);
    analogWrite (_b, 255);
    delay(250);
    analogWrite (_b, 0);
    delay(250);
  }
}
void Christmas::fade_obo (int n) {
  if (n == NULL)n = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 255; j++) {
      analogWrite (_r, j);
      delay(10);
    }
    delay(2000);
    for (int j = 254; j > 0; j--) {
      analogWrite (_r, j);
      delay(10);
    }
    delay(1000);
    for (int j = 0; j < 255; j++) {
      analogWrite (_g, j);
      delay(10);
    }
    delay(2000);
    for (int j = 255; j > 0; j--) {
      analogWrite (_g, j);
      delay(10);
    }
    delay(1000);
    for (int j = 0; j < 255; j++) {
      analogWrite (_b, j);
      delay(10);
    }
    delay(2000);
    for (int j = 255; j > 0; j--) {
      analogWrite (_b, j);
      delay(10);
    }
    delay(1000);
  }
  analogWrite (_r, 0);
  analogWrite (_g, 0);
  analogWrite (_b, 0);
}

