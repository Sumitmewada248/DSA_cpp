
#include<string>
#include<unordered_set>
#include<iostream>
using namespace std;

bool isPanagram(string & sentence){
    unordered_set<char> letter;

    for (char c:sentence){
        if (isalpha(c)){
            letter.insert(tolower(c));
        }
    }

    return letter.size() == 26;



}


int main()
{

    string sentence = "the quick brown fox jumps over the lazy dog";
    if (isPanagram(sentence)){
        cout<<"Panagram";
    }
    else{
        cout<<"Not Panagram";
    }
    



}