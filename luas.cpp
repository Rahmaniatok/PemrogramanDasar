#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to multiply two arrays
vector<int> multiplyArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> result(arr1.size() + arr2.size(), 0);

    // Perform multiplication digit by digit
    for (int i = arr1.size() - 1; i >= 0; i--) {
        for (int j = arr2.size() - 1; j >= 0; j--) {
            int product = arr1[i] * arr2[j];

            int carry = product / 10;
            int digit = product % 10;

            // Add the product to the corresponding positions in the result array
            result[i + j + 1] += digit;
            result[i + j] += carry;

            // Handle carry
            if (result[i + j + 1] >= 10) {
                result[i + j + 1] -= 10;
                result[i + j]++;
            }
        }
    }

    // Remove leading zeros
    while (!result.empty() && result.front() == 0) {
        result.erase(result.begin());
    }

    return result;
}

// Function to convert a number string to an array
vector<int> convertToDigitArray(const string& number) {
    vector<int> digits;

    for (char c : number) {
        digits.push_back(c - '0');
    }

    return digits;
}

// Function to convert an array to a number string
string convertToString(const vector<int>& digits) {
    string number;

    for (int digit : digits) {
        number += to_string(digit);
    }

    return number;
}

int main() {
    int t;
    cin >> t;
    vector<string> length(t);
    vector<string> width(t);

    for (int i = 0; i < t; i++) {
        string input;
        cin >> input;
        size_t spacePos = input.find(' ');

        if (spacePos != string::npos) {
            length[i] = input.substr(0, spacePos);
            width[i] = input.substr(spacePos + 1);
        }
    }
    for (int i=0; i<t; i++){
        vector<int> arr1 = convertToDigitArray(length[i]);
        vector<int> arr2 = convertToDigitArray(width[i]);

        vector<int> result = multiplyArrays(arr1, arr2);

        string hasil = convertToString(result);
        cout << hasil << endl;
    }
    return 0;
}