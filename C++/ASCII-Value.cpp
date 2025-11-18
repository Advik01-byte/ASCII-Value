#include <iostream>
#include <algorithm> // For std::reverse
#include <cmath>

using namespace std;

string decimalToBinary(int n) {
    if (n == 0) {
        return "0";
    }
    string binaryString = "";
    while (n > 0) {
        binaryString += std::to_string(n % 2); // Append remainder (0 or 1)
        n /= 2; // Divide by 2
    }
    reverse(binaryString.begin(), binaryString.end()); // Reverse to get correct order
    return binaryString;
}

int binaryToDecimal(long long binaryNumber) {
    int decimalNumber = 0;
    int i = 0; // Power of 2
    int remainder;

    while (binaryNumber != 0) {
        remainder = binaryNumber % 10; // Get the last digit
        binaryNumber /= 10;           // Remove the last digit
        decimalNumber += remainder * pow(2, i); // Add (digit * 2^i)
        ++i;
    }
    return decimalNumber;
}

int main() {
  char ans;
  int num;
  char Char;
  char binary;
  char valInBinary;

  cout << endl << "Do you want to get character from ASCII value or vice versa (Type y for character from ASCII value and n for vice versa)? ";
  cin >> ans;

  if (ans == 'y' || ans == 'Y') {
    cout << "Do you want to tell a binary value to find the character for it or not (Type y for binary value and n for not)? ";
    cin >> valInBinary;

    if (valInBinary == 'n' || valInBinary == 'N') {
      cout << endl << "Tell an ASCII value to find the character for it: ";
      cin >> num;

      cout << endl << "The character for " << num << " is: " << (char)num << endl;
    } else if (valInBinary == 'y' || valInBinary == 'Y') {
      cout << endl << "Tell an ASCII value in binary to find the character for it: ";
      cin >> num;

      cout << endl << "The character for binary " << num << " is: " << (char)binaryToDecimal(num) << endl;
    } else {
      cout << endl << "ERROR. Wrong input entered, you can only type y or n." << endl;
    }
  } else if (ans == 'n' || ans == 'N') {
    cout << "Do you also want to get the ASCII value in binary or not (Y/n)? ";
    cin >> binary;
    if (binary == 'n' || binary == 'N') {
      cout << endl << "Tell a character to find the ASCII value for it: ";
      cin >> Char;

      cout << endl << "The ASCII value for " << Char << " is: " << (int)Char << endl;
    } else if (binary == 'y' || binary == 'Y') {

      cout << endl << "Tell a character to find the ASCII value in binary for it: ";
      cin >> Char;

      cout << endl << "The ASCII value in binary for " << Char << " is: " << decimalToBinary((int)Char) << endl;
    } else {
      cout << endl << "ERROR. Wrong input entered, you can only type y or n." << endl;
    }
  } else {
    cout << endl << "ERROR. Wrong input entered, you can only type y or n." << endl;
  }
  
  return 0;
}
