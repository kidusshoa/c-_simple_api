#include <iostream>
using namespace std;
#include "crow_all.h"
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>

#define DB_HOST "tcp://localhost:3306"
#define DB_USER "kidus"
#define DB_PASS "kidus"
#define DB_NAME "notes_app"

sql::mysql::MySQL_Driver *driver;
sql::Connection *con;

void init_db() {
    driver = sql::mysql::get_mysql_driver_instance();
    con = driver->connect(DB_HOST, DB_USER, DB_PASS);
    con->setSchema(DB_NAME);
}
int main(){
    cout<<"hello world"<<endl;
    return 0;
}