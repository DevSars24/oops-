#include <iostream>
#include <string>
using namespace std;


class DatabaseConnection {

    private:
    string connectionString;
    bool isConnected;


    public:
    DatabaseConnection(const string& connStr) : connectionString(connStr), isConnected(false) {
        cout << "Connection initialized" << endl;
    }


    const string& getConnectionString() const {
        return connectionString;
    }
    

    void setConnectionString(const string& connStr) {
        if (!connStr.empty()) {
            connectionString = connStr;
        } else {
            cout << "Invalid connection string" << endl;
        }
    }
    

    void connect() {
        if (!isConnected) {
            isConnected = true;
            cout << "Connected to: " << connectionString << endl;
        }
    }

};


    int main() {
        DatabaseConnection db("mysql://localhost"); // constructor called
        db.connect();                               // connect() used
        cout << "Connection: " << db.getConnectionString() << endl; // safe getter
        db.setConnectionString("");  // Invalid, so nothing changes
        return 0;
    }
    