#include <iostream>
#include "Coords.h"

#ifndef _GEOGRAPHIC_BOUNDINGBOX_H_
    #define _GEOGRAPHIC_BOUNDINGBOX_H_
    
    
    class BoundingBox{
        Coords left_top, right_top, right_bottom, left_bottom;
        
        public:
            BoundingBox(Coords,Coords);
            BoundingBox(Coords,Coords,Coords,Coords);
            void print();
            
            void setLeftTop(Coords coords){
                left_top = coords;
            }
            
            Coords getLeftTop(){
                return left_top;
            }
            
            void setLeftBottom(Coords coords){
                left_bottom = coords;
            }
            
            Coords getLeftBottom(){
                return left_bottom;
            }
            
            void setRightTop(Coords coords){
                right_top = coords;
            }
            
            Coords getRightTop(){
                return right_top;
            }
            
            void setRightBottom(Coords coords){
                right_bottom = coords;
            }
            
            Coords getRightBottom(){
                return right_bottom;
            }
    };
#endif