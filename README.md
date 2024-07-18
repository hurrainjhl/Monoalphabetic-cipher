# Monoalphabetic-cipher
## Implementing a Monoalphabetic Cipher in C++

### Functionality

The C++ code provided implements a **monoalphabetic cipher**, a type of substitution cipher where each letter in the plaintext is consistently substituted with another letter throughout the message. Here’s a breakdown of its functionality:

#### Key Features

1. **MonoalphabeticCipher Class**: 
   - **Encryption Mapping**: Generates a substitution map (`encryptMap`) where each letter of the alphabet is mapped to another letter. For example, 'a' might map to 'q', 'b' to 'w', and so on.
   - **Decryption Mapping**: Creates a reverse map (`decryptMap`) to decode ciphertext back into plaintext.

2. **Encrypt Method**: 
   - Takes a plaintext string as input.
   - Converts each alphabetic character to its corresponding substitution using `encryptMap`.
   - Non-alphabetic characters (such as spaces or punctuation) remain unchanged.

3. **Decrypt Method**: 
   - Accepts a ciphertext string.
   - Reverses the encryption process using `decryptMap`.
   - Non-alphabetic characters are preserved in the output.

4. **Main Function**: 
   - Provides an interactive command-line interface (CLI) for user interaction.
   - Prompts the user to enter a message and choose between encryption (`e`) or decryption (`d`).
   - Uses the `MonoalphabeticCipher` class to perform the selected operation.
   - Displays the result (either encrypted or decrypted message) to the user.

5. **Input Handling**: 
   - Ensures robust input handling using `cin.ignore()` and `getline()` to manage user input and avoid buffer issues.
   - Allows multiple rounds of encryption or decryption until the user chooses to exit.

#### Monoalphabetic Cipher

A **monoalphabetic cipher** is a basic substitution cipher where each letter in the plaintext is consistently replaced by another letter.
This substitution remains static throughout the message, offering a straightforward method of encryption and decryption. In the provided code:

- **Encryption**: Each letter in the plaintext is substituted with another predetermined letter, as defined by `encryptMap`.
- **Decryption**: Uses `decryptMap` to reverse the process, converting the substituted letters back to their original form.

#### Usage

This implementation provides a foundational understanding of how monoalphabetic ciphers work and demonstrates their application in basic text encryption and decryption using C++.
It serves as an educational tool to explore cryptographic concepts and their practical implementation in programming.

By studying and using this code, one can grasp the fundamental principles of substitution ciphers and gain insight into building more complex cryptographic algorithms and applications.
