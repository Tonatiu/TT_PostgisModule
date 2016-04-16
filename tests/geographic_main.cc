#include "../src/geographic/Coords.h"
#include "../src/geographic/BoundingBox.h"

int main(int argc, char** argv){
    Coords left_top(0,1);
    Coords right_bottom(1,-1);
    Coords left_bottom(1,-1);
    Coords right_top(1,-1);
    
    BoundingBox box();
    box.print();
}



std::vector<Municipio> getMunicipios(left_top, right_top, right_bottom, left_bottom){
    
}