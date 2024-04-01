#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//word to Pig Latin
string pigLatin(const string& word)
{
    return word.substr(1) + string(1, tolower(word[0])) + "ay";
}

//sentence into Pig Latin
string encryptMessage(const string& sentence)
{
    stringstream ss(sentence);
    string word;
    string encryptedSentence;
    while (ss >> word)
    {
        encryptedSentence += pigLatin(word) + " ";
    }
    // Capitalize the first letter
    encryptedSentence[0] = toupper(encryptedSentence[0]);
    return encryptedSentence;
}

int main()
{
    int numSentences;
    cin >> numSentences;
    cin.ignore();
    for (int i = 0; i < numSentences; ++i)
    {
        string sentence;
        getline(cin, sentence);
        cout << encryptMessage(sentence) << endl;
    }
    return 0;
}
