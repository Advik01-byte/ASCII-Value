# ASCII

## What are ASCII Values?

- ASCII values are numerical codes that represent characters in computers and other electronic devices.
- The standard is called the **American Standard Code for Information Interchange**, or **ASCII**, which serves as a common language between machines for handling text-based data.

## Standard ASCII

Standard ASCII uses 7 bits to encode 128 characters, with each character assigned a unique decimal value from 0 to 127.

- **Printable characters (32–126):** These include uppercase letters, lowercase letters, numbers, and common punctuation marks. For example:
  - The ASCII value of 'A' is 65.
  - The ASCII value of 'a' is 97.
  - The ASCII value of '0' is 48.

- **Control characters (0–31 and 127):** These are non-printable characters used for device control and formatting. Examples include:
  - **CR (13):** Carriage Return.
  - **LF (10):** Line Feed, which is a new line.
  - **DEL (127):** The Delete character.
 
## Extended ASCII

To support more characters, including those from other languages, extended ASCII was developed.  

- **Expansion:** Extended ASCII uses 8 bits, providing an additional 128 character codes (128–255).
- **Regional variations:** There is no single universal extended ASCII standard. Instead, different versions, known as code pages, were created to support languages with additional symbols and characters.
- **Examples of characters:** Extended ASCII sets often include letters with diacritical marks (e.g., é, ö), currency symbols (e.g., £, ¥), and other graphical characters.

## ASCII's role and legacy
ASCII was foundational for early computing and remains important, especially since modern encoding systems like Unicode were built to be backward-compatible with it.   
However, Unicode is now the dominant character encoding standard for global applications.

_____________________________________________________________________________________________________________________________________________________________________

# Interested in this Repository?

## Steps:
1. Download the `.zip` file.
2. Double click on the `.exe` file.
3. It will take you to the command prompt.
4. You can now find ASCII Values from characters or vice versa.

## What you can do:
- Get character from binary text.
- Get character from ASCII Value.
- Get ASCII Value from character.
- Get ASCII Value in binary from character.

To make all of this happen, just answer the questions in the command prompt accordingly.

_______________________________________________________________________________________________________________________________________________________________________

# C++ & C

If you don't know, I created all of this using `C++` and `C`

The two main functions:
```C++
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
```

```C++
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
```

After making this I converted explictly from char to int or int to char, converting to ASCII Value or vice versa.  
I did this by:
```C++
(char)num
```
AND
```C++
(int)Char
```

You can see the `.cpp` or `.c` files for the whole code.
