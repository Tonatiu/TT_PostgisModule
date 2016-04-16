#include "BoundingBox.h"


BoundingBox::BoundingBox(Coords left_top, Coords right_top, Coords right_bottom, Coords left_bottom){
    this->left_top = left_top;
    this->right_top = right_top;
    this->right_bottom = right_bottom;
    this->left_bottom = left_bottom;
}

void BoundingBox::print(){
    left_top.print();
    right_top.print();
    right_bottom.print();
    left_bottom.print();
}