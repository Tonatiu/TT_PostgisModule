#	PREFIX
CC=g++


#	FLAGS
POSTGIS_LIBRARY=-lpqxx -lpq


#	FILES
OBJS_GEPGRAPHIC=src/geographic/Coords.cc src/geographic/BoundingBox.cc tests/geographic_main.cc
OBJS_POSTGIS=src/postgis/postgis.h src/postgis/PostgisFunctions.cc src/geographic/GeoPoint.cc src/geographic/GeoPolygon.cc src/geographic/Coords.cc src/postgis/entity/Municipio.h tests/postgis_main.cc


#	OUTPUT
OUT_FILE=-o ./tests/out


#	COMMENT
COMMENT=Run with ./tests/out

all: $(OBJS_POSTGIS)
	$(CC) $(OBJS_POSTGIS) $(OUT_FILE) $(POSTGIS_LIBRARY)
	@echo $()
	@echo $(COMMENT)