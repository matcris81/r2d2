//
//  main.cpp
//  learning_C++
//
//  Created by Mat Cris on 3/11/22.
//

#include <fstream>
#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string username;
    string password;
    bool login = false;
    int response;
    unordered_map<string, string> usersinfo;
    
    while(login == false) {
        cout << "\nLogin (1) or sign up (2)?";
        cin >> response;
        
        if (response == 1) {
            
            cout << "Username: ";
            cin >> username;

            cout << "Password: ";
            cin >> password;
            
            if(usersinfo.at(username) == password) {
                cout << "welcome";
            }
            
        } else if (response == 2) {
            cout << "New username: ";
            cin >> username;
            
            cout << "New password: ";
            cin >> password;
            
            usersinfo[username]= password;
            
        }
    }
    
    return 0;
}
