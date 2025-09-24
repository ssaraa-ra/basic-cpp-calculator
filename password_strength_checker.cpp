#include <iostream>
using namespace std;

int main(){

    string password;
    cout << "Enter a password to check its strength:" << endl;
    cin >> password;
    cout << "You entered: " << password << endl;

    
    bool lengthOK = password.length() >= 8; 
    /*if(!lengthOK){
        cout<< "Password is too short." << endl;
    }*/

    bool hasUpper = false;
    bool hasLower = false;
    bool hasNumber = false;
    bool hasSpecial = false;

    string specialChars = "!@#$%^&*()-_=+[]{};:'\",.<>?/\\|`~";

    for(int i =0; password.length()> i; i++){
        char c = password[i];
        if(c>= 'A' && c <= 'Z')hasUpper = true;
        else if(c>= 'a' && c <= 'z')hasLower = true;
        else if(c>= '0' && c <= '9')hasNumber = true;
        else if(specialChars.find(c) !=string::npos)hasSpecial = true;

    }

    //pikt per kriter
    int strengthPoints= 0;
    if(lengthOK) strengthPoints++;
    if(hasUpper) strengthPoints++;
    if(hasLower) strengthPoints++;
    if(hasNumber) strengthPoints++;
    if(hasSpecial) strengthPoints++;

    //kalkulimi edhe feedback

    cout << "Password Strength Report:" << endl;
    if(!lengthOK) cout << " Password is too short (minimum 8 characters)." << endl;
    if(!hasUpper) cout << " Password must include at least one uppercase letter." << endl;
    if(!hasLower) cout << " Password must include at least one lowercase letter." << endl;
    if(!hasNumber) cout << " Password must include at least one number." << endl;
    if(!hasSpecial) cout << " Password must include at least one special character." << endl;

    if(strengthPoints==5) cout << " Overall Strength: Strong" << endl;
    else if(strengthPoints>=3) cout << " Overall Strength: Medium" << endl;
    else cout << " Overall Strength: Weak" << endl;

    return 0;
}