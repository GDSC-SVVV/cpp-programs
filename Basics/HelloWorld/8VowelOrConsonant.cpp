#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
std::vector<char> v = { 'a', 'e', 'i', 'o', 'u'};

char letter;
cout<<"Please, enter a letter:\n";
cin>>letter;
letter=tolower(letter);

if(!isalpha(letter)) {
  cout << "Sorry, Non-alphabetic character, please try again";
  return 0;
}

if (std::count(v.begin(), v.end(), letter)) {
    cout<<"Is a vowel";
}
else {
    cout<<"Is a consonant";
}
    return 0;
}

