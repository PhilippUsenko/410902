#include<iostream>
#include<string>

using namespace std;

int main() {

	string word; 
	cout << "Enter your line: ";
	getline(cin, word);
	int count = 1;
	for (int i = 0; i < word.length(); i++) {  
		if (word[i] == ' ' && i != 0 && isalpha(word[i - 1])) {   
				count++;
		}
	}
	cout << "Words: " << count << endl; 
	return 0;
}  
