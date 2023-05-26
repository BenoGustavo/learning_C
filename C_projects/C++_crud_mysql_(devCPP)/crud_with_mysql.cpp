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

// Mostrando valores
void displayResult(MYSQL_RES* result) {
    MYSQL_ROW row;
    MYSQL_FIELD* field;

    // Pega o nome das colunas
    while ((field = mysql_fetch_field(result))) {
        cout << field->name << " ";
    }
    cout << endl;

    // Pega os dados da linha
    while ((row = mysql_fetch_row(result))) {
        for (unsigned int i = 0; i < mysql_num_fields(result); ++i) {
            cout << row[i] << " ";
        }
        cout << endl;
    }
}

// Criando funcionario
void createfuncionario(MYSQL* connection, string CPF, string nome, string email, string telefone, string logradouro, string funcao, string cep, string numero, string bairro){
	
	//Comando mysql & passando variaveis & criando endereço
	string createQuery = "INSERT INTO endereco (logradouro, cep, numero, bairro) VALUES ('" + logradouro + "', '" + cep + "' , '" + numero + "', '" + bairro + "')";
	
	//Executando comando mysql & mostrando mensagem em caso de sucesso
    if (executeQuery(connection, createQuery)) {
        cout << "Record created successfully." << endl;
    }
    
    //Comando mysql selecionando ID do endereço do usuario para alocar em suas informações
    string selectQuery = "SELECT * FROM endereco ORDER BY id_endereco DESC LIMIT 1";
    
	    if (executeQuery(connection, selectQuery)) {
	        MYSQL_RES* result = mysql_store_result(connection);
	        
	        //Alocando os valores dentro de row
			MYSQL_ROW row = mysql_fetch_row(result);
	        
	        //Salvando valor na variavel id_endereco
			string id_endereco = row[0];
			
			//Comando mysql Criando funcionario
			createQuery = "INSERT INTO funcionario (CPF, nome, email, telefone ,funcao, id_endereco) VALUES ('" + CPF + "', '" + nome + "' , '" + email + "', '" + telefone + "' , '" + funcao + "', '" + id_endereco + "')";
			
			try{
				
				if (executeQuery(connection, createQuery)) {
			        cout << "Record created successfully." << endl;
			    }
			    
			    }catch(...){ //Por algum motivo demoniaco a funcao catch n é executada com o erro do mysql
		
					// Mostrando erro ocorrido
			        //std::cerr << "Erro ao criar um funcionario: " << e.what() << std::endl;
					
					//Comando mysql selecionando ID do endereço para deletar
			    	string selectQuery = "SELECT * FROM endereco ORDER BY id_endereco DESC LIMIT 1";
				    
				    if (executeQuery(connection, selectQuery)){
				    	MYSQL_RES* result = mysql_store_result(connection);
				    	
				    	//Alocando os valores dentro de row
						MYSQL_ROW row = mysql_fetch_row(result);
						
						//Salvando valor na variavel id_endereco
						string id_endereco = row[0];
						
						string deleteQuery = "DELETE FROM endereco WHERE id_funcionario = '" + id_endereco + "'";
			    		
						if (executeQuery(connection, deleteQuery)) {
			        		cout << "Record deleted successfully." << endl;
			    		}
			    		
			    		mysql_free_result(result);
					}
        
				}
			
	        mysql_free_result(result);
	    }
    
}

// Read
void ler_funcionario(MYSQL* connection,string id_funcionario){

string selectQuery = "SELECT * FROM funcionario WHERE id_funcionario = '" + id_funcionario + "'";

    if (executeQuery(connection, selectQuery)) {
        MYSQL_RES* result = mysql_store_result(connection);
        displayResult(result);
        mysql_free_result(result);
    }
}

// Delete
void deletar_funcionario(MYSQL* connection,string id_funcionario){
	
string deleteQuery = "DELETE FROM funcionario WHERE id_funcionario = '" + id_funcionario + "'";
    if (executeQuery(connection, deleteQuery)) {
        cout << "Record deleted successfully." << endl;
    }
}


// att
/*

void atualizar_funcionario(MYSQL* connection,int id_funcionario ,string CPF, string nome, string email, string telefone, string logradouro, string funcao, string cep, string numero, string bairro){

    string updateQuery = string updateQuery = "UPDATE funcionario SET nome = '" + nome + "', email = '" + email + "', telefone = '" + telefone + "', funcao = '" + funcao + "' WHERE id_funcionario = '" + id_funcionario "'"
    
    if (executeQuery(connection, updateQuery)) {
        cout << "Record updated successfully." << endl;
    }
}

*/

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
	
	//Funcionando 
	createfuncionario(connection,"349.558.899-61","Gustavo","gustavo.gorges@faculdadecesusc.edu.br","48 32695585","rua Evaristo Guilherme Dos santos","Desenvolvedor","50000800","1234","vargem de fora");
	//ler_funcionario(connection,"1");
	//deletar_funcionario(connection,"1");
	
	return 0;
}