#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

char HOST[] = "localhost";
char USER[] = "root";
char PASS[] = "root";
char DB_NAME[] = "hospital_v2";

// Function to execute MySQL queries
bool executeQuery(MYSQL* connection, const string& query) {
    if (mysql_query(connection, query.c_str()) != 0) {
        cout << "Error executing query: " << mysql_error(connection) << endl;
        return false;
    }
    return true;
}

// Function to display query results
void displayResult(MYSQL_RES* result) {
    MYSQL_ROW row;
    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); ++i) {
            cout << row[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    MYSQL* connection = mysql_init(0);
    
    if (!connection) {
        cout << "ERROR: MySQL object initialization failed." << endl;
        return 1;
    }
    
    if (!mysql_real_connect(connection, HOST, USER, PASS, DB_NAME, 3306, NULL, 0)) {
        cout << "Error: Failed to connect to the database." << endl;
        cout << mysql_error(connection) << endl;
        return 1;
    }
    
    cout << "Connected to the database." << endl << endl;
	return 0;
}



