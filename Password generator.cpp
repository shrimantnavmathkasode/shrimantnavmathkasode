// hi guy's this my first project password generator 
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string getpassword(int length) {
    string password = "";
    string character = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    int charsize = character.size();
    srand(time(0));
    int randomindex;
    for (int i = 0; i < length; i++) {
        randomindex = rand() % charsize;
        password = password + character[randomindex];
    }
    return password; // Return the generated password as a string
}

int main() {
    int length;
    cout << "Enter the length of the password :: " << endl;
    cin >> length;
    string password = getpassword(length);
    cout << "Generated password :: " << password << endl;
    return 0;
}
