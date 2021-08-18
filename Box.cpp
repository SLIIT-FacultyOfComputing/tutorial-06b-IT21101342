#include "Box.h"

// Implement setters and getters
void Box::setLength(int l){
 length=l;
}
void Box::setWidth(int w){
 width=w;
}
void Box:: setHeigth(int h){
 heigth=h;
}
void Box::getLength(int l){
 return length;
}
void Box::getWidth(int w){
 return width;
}
void Box:: getHeigth(int h){
 return heigth;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length*width*heigth;
  
}
