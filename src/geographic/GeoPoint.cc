#include "GeoPoint.h"

GeoPoint::GeoPoint(Coords coords, std::string srid){
    this->coords = coords;
    this->srid = srid;
}

GeoPoint::GeoPoint(double lat, double lng, std::string srid){
    coords.setLat(lat);
    coords.setLng(lng);
    this->srid = srid;
}

std::string GeoPoint::asText(){
    double lat = coords.getLat();
    double lng = coords.getLng();
    
    std::string lat_string = doubleToString(lat);
    std::string lng_string = doubleToString(lng);
    
    std::string text ("POINT(");
    text.append(lng_string);
    text.append(" ");
    text.append(lat_string);
    text.append(")");
    
    return text;
}

std::string doubleToString(double dbl){
    std::ostringstream strs;
    strs << dbl;
    return strs.str();
}