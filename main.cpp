#include<iostream>
#include<string>
#include<math.h>
using namespace std;

string hextodec(string input) {
    int result = 0;
    for (int i = 0; i < input.length(); i++) {
        char c = input[input.length() - i - 1];
        if (c >= '0' && c <= '9') {
            result += (c - '0') * pow(16, i);
        }
        else if (c >= 'A' && c <= 'F') {
            result += (c - 'A' + 10) * pow(16, i);
        }
    }
    return to_string(result);
}


string hextobin(string input) {
    string result = "";
    for (int i = 0; i < input.length(); i++) {
        char c = input[input.length() - i - 1];
        if (c == '0') result = "0000" + result;
        else if (c == '1') result = "0001" + result;
        else if (c == '2') result = "0010" + result;
        else if (c == '3') result = "0011" + result;
        else if (c == '4') result = "0100" + result;
        else if (c == '5') result = "0101" + result;
        else if (c == '6') result = "0110" + result;
        else if (c == '7') result = "0111" + result;
        else if (c == '8') result = "1000" + result;
        else if (c == '9') result = "1001" + result;
        else if (c == 'A') result = "1010" + result;
        else if (c == 'B') result = "1011" + result;
        else if (c == 'C') result = "1100" + result;
        else if (c == 'D') result = "1101" + result;
        else if (c == 'E') result = "1110" + result;
        else if (c == 'F') result = "1111" + result;
    }
    return result;
}


string bintodec(string input) {
    int result = 0;
    for (int i = 0; i < input.length(); i++) {
        char c = input[input.length() - i - 1];
        result += (c - '0') * pow(2, i);
    }
    return to_string(result);
}


string bintohex(string input) {
    int c = stoi(input);
    string result = "";
    while (c > 0) {
        if (c % 10000 == 0000) result = '0' + result;
        else if (c % 10000 == 1) result = '1' + result;
        else if (c % 10000 == 10) result = '2' + result;
        else if (c % 10000 == 11) result = '3' + result;
        else if (c % 10000 == 100) result = '4' + result;
        else if (c % 10000 == 101) result = '5' + result;
        else if (c % 10000 == 110) result = '6' + result;
        else if (c % 10000 == 111) result = '7' + result;
        else if (c % 10000 == 1000) result = '8' + result;
        else if (c % 10000 == 1001) result = '9' + result;
        else if (c % 10000 == 1010) result = 'A' + result;
        else if (c % 10000 == 1011) result = 'B' + result;
        else if (c % 10000 == 1100) result = 'C' + result;
        else if (c % 10000 == 1101) result = 'D' + result;
        else if (c % 10000 == 1110) result = 'E' + result;
        else if (c % 10000 == 1111) result = 'F' + result;
        c /= 10000;
    }
    return result;
}

string dectobin(string input) {
    int c = stoi(input);
    string result = "";
    while (c > 0) {
        result = to_string(c % 2) + result;
        c /= 2;
    }
    return result;
}


string dectohex(string input) {
    int c = stoi(input);
    string result = "";
    while (c > 0) {
        char h = '0';
        if (c % 16 == 0) h = '0';
        else if (c % 16 == 1) h = '1';
        else if (c % 16 == 2) h = '2';
        else if (c % 16 == 3) h = '3';
        else if (c % 16 == 4) h = '4';
        else if (c % 16 == 5) h = '5';
        else if (c % 16 == 6) h = '6';
        else if (c % 16 == 7) h = '7';
        else if (c % 16 == 8) h = '8';
        else if (c % 16 == 9) h = '9';
        else if (c % 16 == 10) h = 'A';
        else if (c % 16 == 11) h = 'B';
        else if (c % 16 == 12) h = 'C';
        else if (c % 16 == 13) h = 'D';
        else if (c % 16 == 14) h = 'E';
        else if (c % 16 == 15) h = 'F';
        result = h + result;
        c /= 16;
    }
    return result;
}

int main() {
    cout << hextodec("EF") << endl;
    cout << hextobin("EF") << endl;
    cout << bintodec("0110") << endl;
    cout << bintohex("0111") << endl;
    cout << dectohex("128") << endl;
    cout << dectobin("128") << endl;
    return 0;
}
