#include <iostream>
#include <string>
#include <sstream>
#include "Coords.h"


#ifndef _GEOGRAPHIC_GEO_POINT_H_
    #define _GEOGRAPHIC_GEO_POINT_H_
    
    std::string doubleToString(double);

    class GeoPoint{
        Coords coords;
        std::string srid;
        
        public:
            GeoPoint(Coords, std::string srid="4326");
            GeoPoint(double, double, std::string srid="4326");
            std::string asText();
            
            void setCoords(Coords coords){
                this->coords=coords;
            }
            
            Coords getCoords(){
                return coords;
            }
            
            double getLat(){
                return coords.getLat();
            }
            
            double getLng(){
                return coords.getLng();
            }
            
            void setSrid(std::string srid){
                this->srid = srid;
            }
            
            std::string getSrid(){
                return srid;
            }
    };

#endif