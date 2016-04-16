
#ifndef _POSTGIS_POSTGIS_H_
    #define _POSTGIS_POSTGIS_H_
    
    
    /*
    * 
    * Configuración para el acceso a postgis
    * 
    */
    #define POSTGIS_HOST "127.0.0.1"
    #define POSTGIS_PORT "5432"
    #define POSTGIS_DATABASE "municipios"
    #define POSTGIS_USER "postgres"
    #define POSTGIS_PASSWORD "root"
    
    
    /*
    *
    * Query para la conexión a la base de datos
    * 
    */
    #define POSTGIS_QUERY_CONNECTION "dbname=" POSTGIS_DATABASE " user=" POSTGIS_USER " password=" POSTGIS_PASSWORD " hostaddr=" POSTGIS_HOST " port=" POSTGIS_PORT
    
#endif
