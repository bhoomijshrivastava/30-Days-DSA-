#include <iostream>
#include <string>

using namespace std;

string deleteConsecutiveStrings(string s)
{
	int i = 0;  // Initialize start and stop pointers
	int j = 0;

	string newElements = ""; // Initialize an empty string for new elements

	// Iterate string using j pointer
	while (j < s.length()) {
		// If both elements are same then skip
		if (s[i] == s[j]) {
			j++;
		}
		// If both elements are not same then append new element
		else if (s[j] != s[i] || j == s.length() - 1) {
			newElements += s[i];

			i = j; // After appending, slide over the window
			j++;
		}
	}

	newElements += s[j - 1];  // Append the last string
	return newElements;
}

int main()
{
	string s = "geeks for geeks is best"; // Input

	cout << "Input : " << s << endl; // Printing original string

	cout << "Output : " << deleteConsecutiveStrings(s) << endl; // Printing result

	return 0;
}
