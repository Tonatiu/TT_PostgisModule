#include <iostream>
#include <string>
#include "Coords.h"


#ifndef _GEOGRAPHIC_GEO_POLYGON_H_
    #define _GEOGRAPHIC_GEO_POLYGON_H_

    class GeoPolygon{
        Coords *coords;
        
        std::string srid;
        int count_vertices;
        
        std::string text;
        
        public:
            GeoPolygon();
            GeoPolygon(int, std::string srid = "4326");
            GeoPolygon(std::string, std::string srid = "4326");
            
            Coords * getCoords(){
                return coords;
            }
            
            void setSrid(std::string srid){
                this->srid = srid;
            }
            
            std::string getSrid(){
                return srid;
            }
            
            void setText(std::string text){
                this->text = text;
            }
            
            std::string getText(){
                return text;
            }
    };

#endif