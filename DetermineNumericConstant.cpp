#include<iostream>
using namespace std;

bool is_numeric_constant(string input_string) {
for (int i = 0; i < input_string.length(); i++) {
if (!isdigit(input_string[i])) {
return false;
}
}
return true;
}

int main() {
string input_string;
cout << "Enter a string: ";
cin >> input_string;
if (is_numeric_constant(input_string)) {
cout << "Numeric constant" << endl;
} else {
cout << "Not numeric" << endl;
}
return 0;
}