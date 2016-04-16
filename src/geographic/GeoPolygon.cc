#include "GeoPolygon.h"


GeoPolygon::GeoPolygon(){}

GeoPolygon::GeoPolygon(int count_vertices, std::string srid){
    this->count_vertices = count_vertices;
    this->srid = srid;
    
    coords = new Coords[count_vertices];
}


GeoPolygon::GeoPolygon(std::string text, std::string srid){
    this->text = text;
    this->srid = srid;
}
