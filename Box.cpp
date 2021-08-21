#include "Box.h"

// Implement setters and getters
void Box::setLength(int l){
  length = l;
}
void Box::setWidth(int w){
  width = w;
}
void Box::setHeight(int h){
  height = h;
}

int Box::getHeight()
{
  return height;
}
int Box::getLength()
{
  return length;
}
int Box::getWidth()
{
  return width;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return height*length*width;
}
