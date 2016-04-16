#include "Coords.h"


Coords::Coords(double lat, double lng){
    this->lat = lat;
    this->lng = lng;
}


void Coords::setLat(double lat){
    this->lat = lat;
}


void Coords::setLng(double lng){
    this->lng = lng;
}


double Coords::getLat(){
    return lat;
}


double Coords::getLng(){
    return lng;
}


void Coords::print(){
    std::cout << "lat=" << lat << " lng=" << lng << std::endl;
}
