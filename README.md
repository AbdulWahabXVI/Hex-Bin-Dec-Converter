# Base Converter Toolkit (C++)

A simple C++ utility for converting numbers between different numeral systems:

- Decimal ↔ Binary
- Binary ↔ Hexadecimal
- Hexadecimal ↔ Decimal

## 🚀 Features

- Converts Hex → Decimal
- Converts Hex → Binary
- Converts Binary → Decimal
- Converts Binary → Hex
- Converts Decimal → Binary
- Converts Decimal → Hex

All implemented manually without built-in base conversion libraries (educational purpose).

## 📌 Example Output

Input conversions in `main()`:

```cpp
cout << hextodec("EF") << endl;   // 239
cout << hextobin("EF") << endl;   // 11101111
cout << bintodec("0110") << endl; // 6
cout << bintohex("0111") << endl; // 7
cout << dectohex("128") << endl;  // 80
cout << dectobin("128") << endl;  // 10000000
