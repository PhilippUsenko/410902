#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
int main() {
	string line;
    unsigned letters_count{};
    cout << "Enter line that you want: ";
    getline(cin, line);
    for (unsigned i{}; i < line.length();i++) {
        if (isalpha(line[i])) {
            if (islower(line[i]) && letters_count % 2 == 0) {
                line[i] = toupper(line[i]);
            }
            letters_count++;
        }
    }
    cout << "new line: " << line << endl;
    system("pause");
    return 0;
}