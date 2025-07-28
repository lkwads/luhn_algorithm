#include<iostream>
#include <string>
using namespace std;


bool Valditaion(const string& number){
    int sum = 0;
    bool doubleDigit = false;
    // to start the arrays from the last
    for(int i = number.length() - 1 ; i >= 0 ; i--){
        // to make sure it's a number
        if (!isdigit(number[i])){
            return false ;
        }
        // to convert string to integre some the '3' >> 3
        int digit = number[i] - '0';
        if (doubleDigit) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        doubleDigit = !doubleDigit;
    }
    // return true if result is 0 and return false if result is not 0
    return (sum % 10 == 0);
}
int main(){
    string cardNumber;
    cout << "Enter card number: ";
    cin >> cardNumber;
    if(Valditaion(cardNumber)){
        std::cout << "\n Your card number is valide";
    }else{
        std::cout << "\n You card number is invalide";
    }
}