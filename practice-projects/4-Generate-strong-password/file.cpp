#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

string getPassword(int length){
    string Password = "";
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    int charSize = characters.size();
    int randomIndex;
    for(int i = 0; i < length; i++){
        randomIndex = rand() % charSize;
        Password += characters[randomIndex];
    }
    return Password;
}

int main(){
    srand(time(0));
    int length;
    cout << "Enter the length of the password :: ";
    cin >> length;

    if (length <= 0) {
        cout << "Invalid password length!" << endl;
        return 1;
    }

    string password = getPassword(length);
    cout << "Generated Password :: " << password << endl;
    return 0;
}

