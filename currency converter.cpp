#include <iostream>
using namespace std;

class CurrencyToINR {
public:
        int ch;
        double amt, result;
        void converter() {
        cout << "\n----- CURRENCY CONVERTER -----" << endl;
        cout << "1. USD (US Dollar) to INR" << endl;
        cout << "2. KWD (Kuwaiti Dinar) to INR" << endl;
        cout << "3. JPY (Japanese Yen) to INR" << endl;
        cout << "4. AUD (Australian Dollar) to INR" << endl;
        cout << "5. KRW (South Korean Won) to INR" << endl;
        cout << "6. RUB (Russian Ruble) to INR" << endl;
        cout << "7. BRL (Brazilian Real) to INR" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice between 1-8 from above: ";
        cin >> ch;
        cout << "\n-------------------------------------------------" << endl;
        if(ch == 8)
            exit(0);
        cout << "Enter the amount in foreign currency: ";
        cin >> amt;

        switch (ch) {
            case 1: result = amt * 92.46;
                    cout << amt << " USD = " << result << " INR"; break; //US Dollar
            case 2: result = amt * 300.11;
                    cout << amt << " KWD = " << result << " INR"; break; //Kuwait Dinar
            case 3: result = amt * 0.59;
                    cout << amt << " JPY = " << result << " INR"; break; //Japanese Yen
            case 4: result = amt * 66.50;
                    cout << amt << " AUD = " << result << " INR"; break; //Australian Dollar
            case 5: result = amt * 0.063;
                    cout << amt << " KRW = " << result << " INR"; break; //South Korean Won
            case 6: result = amt * 1.22;
                    cout << amt << " RUB = " << result << " INR"; break; //Russian Ruble
            case 7: result = amt * 18.56;
                    cout << amt << " BRL = " << result << " INR"; break; //Brazilian Real
            default: cout << "Invalid Choice";
        }
        cout << "\n-------------------------------------------------" << endl;
    }
};

int main() {
    CurrencyToINR convert;
    string rep;
    do {
        convert.converter();
        cout << "Enter 'yes' to convert another currency (no for exit): ";
        cin >> rep;
    } while (rep == "yes" || rep == "YES" || rep == "Yes" || rep == "y");

    cout << "Thank you for using our currency Converter!" << endl;
    return 0;
}
