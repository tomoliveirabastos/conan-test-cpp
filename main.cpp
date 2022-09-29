#include "sqlite3.h"
#include <iostream>

int main(int argc, char **argv)
{

       sqlite3 *db;
       int rc;

       rc = sqlite3_open("test.db", &db);

       if (rc)
       {      

              std::cout << "database not opened" << std::endl;
         
              return (0);
       }
       else
       {

              std::cout << "database opened" << std::endl;
       }
       sqlite3_close(db);
       return 0;
}