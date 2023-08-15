#include <iostream>
#include <string>
using namespace std;

bool is_comment(string input_string) {
if (input_string[0] == '/' && input_string[1] == '/') {
return true;
} else if (input_string[0] == '/' && input_string[1] == '*') {
return true;
} else {
return false;
}
}

int main() {
string input_string;
cout << "Enter a string: ";
getline(cin, input_string);
if (is_comment(input_string)) {
cout << "Comment" << endl;
} else {
cout << "Not comment" << endl;
}
return 0;
}