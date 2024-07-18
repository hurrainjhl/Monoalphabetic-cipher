#include <iostream>
#include <string>
#include <cctype>
#include <map>

using namespace std;

class MonoalphabeticCipher
 {
private:
    map<char, char> encryptMap; // Map to store the encryption mapping
    map<char, char> decryptMap;// Map to store the decryption mapping

public:
// Constructor to initialize the encryption and decryption mappings
    MonoalphabeticCipher() 
     {
        // Initialize mapping for encryption and decryption
        string alphabet = "abcdefghijklmnopqrstuvwxyz";
        string shuffled = "qwertyuiopasdfghjklzxcvbnm";
        for (size_t i = 0; i < alphabet.size(); ++i)
        {
            encryptMap[alphabet[i]] = shuffled[i];
            decryptMap[shuffled[i]] = alphabet[i];
        }
    }
// Encrypt a given plaintext using the encryption mapping
    string encrypt(const string & plaintext) 
    {
        string ciphertext = " ";
        for (char ch : plaintext)
        {
            //check whether the text is an alphabet or not if not alphabet then return the same
            if (isalpha(ch)) 
            {  
                // Convert all to lowercase for simplicity
                ch = tolower(ch); 
                ciphertext += encryptMap[ch];
            }
            else 
                // Preserve non-alphabetic characters
            {
                ciphertext += ch;  
            }
        }
        return ciphertext;
    }
// Decrypt a given ciphertext using the decryption mapping
    string decrypt(const string& ciphertext)
    {
        string plaintext = "";
        for (char ch: ciphertext) 
        {
// Check whether the character is an alphabet
            if (isalpha(ch)) {
                ch = tolower(ch);
                plaintext += decryptMap[ch];
            }
            else 
            {
// Preserve non-alphabetic characters
                plaintext += ch;
            }
        }
        return plaintext;
    }
};

int main()
 {
    char num1;
    cout << "Enter m or M to enter message else quit: ";

    cin >> num1;


    while (num1 == 'm' || num1 == 'M') {

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        MonoalphabeticCipher cipher; // Create an instance of the MonoalphabeticCipher class
        string input;
        cout << "Enter a message: ";
        getline(cin, input);

        char choice;
        cout << "Choose an operation (e for encryption, d for decryption): ";
        cin >> choice;

        string result;
        if (choice == 'e') {
            result = cipher.encrypt(input); // Call the encrypt method of the MonoalphabeticCipher class
        }
        else if (choice == 'd') {
            result = cipher.decrypt(input); // Call the decrypt method of the MonoalphabeticCipher class
        }
        else {
            cout << "Invalid choice. Exiting...\n";
            return 1;
        }
        cout << "Result: " << result << "\n\n\n\n\n\n\n\n\n";
        cout << "Enter m or M to enter message: ";
        cin >> num1;
    }
    return 0;
}
