#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

char HOST[] = "localhost";
char USER[] = "root";
char PASS[] = "root";

int main() {
	MYSQL* obj;
	
	if (!(obj = mysql_init(0))){
		cout << "ERROR: MySQL nao achei objeto." << endl;
	}
	else {
		if (!mysql_real_connect(obj, HOST, USER, PASS, "hospital_v2", 3306, NULL, 0)){
			cout << "Erro: ao conectar a base" << endl;
			cout << mysql_error(obj) << endl;
		}
		else {
			cout << "Logged in." << endl << endl;
		}
	}
	return 0;
}
