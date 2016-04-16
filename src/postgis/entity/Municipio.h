#include <string>

#include "../../geographic/GeoPolygon.h"

#ifndef _POSTGIS_ENTITY_MUNICIPIO_H_
    
    #define _POSTGIS_ENTITY_MUNICIPIO_H_
    
    class Municipio{
        GeoPolygon geometry;
        std::string entidad;
        std::string municipio;
        std::string localidad;
        
        
        public:
            void setGeometry(GeoPolygon geometry){
                this->geometry = geometry;
            }
            
            GeoPolygon getGeometry(){
                return geometry;
            }
            
            void setEntidad(std::string entidad){
                this->entidad = entidad;
            }
            
            std::string getEntidad(){
                return entidad;
            }
            
            void setMunicipio(std::string municipio){
                this->municipio = municipio;
            }
            
            std::string getMunicipio(){
                return entidad;
            }
            
            void setLocalidad(std::string localidad){
                this->localidad = localidad;
            }
            
            std::string getLocalidad(){
                return entidad;
            }
    };
    
#endif