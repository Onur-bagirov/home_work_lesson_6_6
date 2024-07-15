#include <iostream>

using namespace std;
int main()
{
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";
    unsigned int number_1;
    cout << "\tEnter number :";
    cin >> number_1;
    if (number_1 % 2 == 0)
    {
        cout << "\tCouple number!";
    }
    else
    {
        cout << "\tSingle number!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";
    float number_2;
    float number_2_;
    cout << "\tEnter first number :";
    cin >> number_2;
    cout << "\tEnter secound number :";
    cin >> number_2_;
    if (number_2_ < number_2)
    {
        cout << "\tSmall number :" << number_2_ << "!";
    }
    else
    {
        cout << "\tSmall number :" << number_2  << "!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n\n\n";
    float number_3;
    cout << "\tEnter number :";
    cin >> number_3;
    if (number_3 > 0)
    {
        cout << "\tPositiv number!";
    }
    else if (number_3 == 0)
    {
        cout << "\tThe number is neither positive nor negative!";
    }
    else if (number_3 < 0)
    {
        cout << "\tNegativ number!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";
    float number_4_;
    float number_4;
    char opperator;
    cout << "\tEnter first number :";
    cin >> number_4;
    cout << "\tEnter secound number :";
    cin >> number_4_;
    cout << "\tEnter operator :";
    cin >> opperator;
    if (opperator == '+')
    {
        cout << "\tAnswer :" << number_4 + number_4 << "!";
    }
    else if (opperator == '-')
    {
        cout << "\tAnswer :" << number_4 - number_4_ << "!";
    }
    else if (opperator == '*')
    {
        cout << "\tAnswer :" << number_4 * number_4_ << "!";
    }
    else if (opperator == '/')
    {
        cout << "\tAnswer :" << number_4 / number_4_ << "!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 5";
    cout << "\n\n\n\n";
    float number_5;
    cout << "\tEnter number :";
    cin >> number_5;
    if (1 < number_5 && number_5 < 50)
    {
        cout << "\tYou have entered the correct number!";
    }
    else
    {
        cout << "\tYou have not entered the correct number!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 6";
    cout << "\n\n\n\n";
    int number_6;
    int number_6_;
    cout << "\tEnter first number :";
    cin >> number_6;
    cout << "\tEnter secound number :";
    cin >> number_6_;
    if (number_6 % number_6_ == 0)
    {
        cout << "\tAnswer : Yes!";
    }
    else if (number_6 % number_6_ != 0)
    {
        cout << "\tAnswer : No!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 7";
    cout << "\n\n\n\n";
    char symbol;
    cout << "\tEnter symbol :";
    cin >> symbol;
    if (isalpha(symbol))
    {
        cout << "\tAnswer : Herif!";
    }
    else if ((symbol == '!') || (symbol == '?') || (symbol == '.') || (symbol == ','))
    {
        cout << "\tAnswer : Symbol!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 8";
    cout << "\n\n\n\n";
    int number_8;
    cout << "\tEnter number :";
    cin >> number_8;
    if (number_8 % 3 == 0)
    {
        cout << "\n\tIt is divided into 3!";
    }
    else
    {
        cout << "\n\tIt is not divisible by 3!";
    }

    if (number_8 % 5 == 0)
    {
        cout << "\n\tIt is divided into 5!";
    }
    else
    {
        cout << "\n\tIt is not divisible by 5!";
    }

    if (number_8 % 7 == 0)
    {
        cout << "\n\tIt is divided into 7!";
    }
    else
    {
        cout << "\n\tIt is not divisible by 7!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 9";
    cout << "\n\n\n\n";
    float number_9;
    cout << "\tEnter number :";
    cin >> number_9;
    if (number_9 < 0)
    {
        cout << "\tAnswer :" << number_9 * number_9 / -number_9 << "!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 10";
    cout << "\n\n\n\n";
    int number_10;
    cout << "\tEnter number :";
    cin >> number_10;
    if (number_10 / 1000)
    {
        cout << "\tIt is a 4-digit number!";
    }
    else if (number_10 / 100)
    {
        cout << "\tIt is a 3-digit number!";
    }
    else if (number_10 / 10)
    {
        cout << "\tIt is a 2-digit number!";
    }
    else if (number_10 / number_10 == 1)
    {
        cout << "\tIt is a 1-digit number!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 11";
    cout << "\n\n\n\n";
    unsigned int number_11;
    cout << "\tEnter number :";
    cin >> number_11;
    int o = (number_11 / 10000) % 10;
    int n = (number_11 / 1000) % 10;
    int u = (number_11 / 100) % 10;
    int r = (number_11 / 10) % 10;
    int s = number_11 % 10;
    if ((o == s) && (n == r))
    {
        cout << "\tIs a palindrome number!";
    }
    else
    {
        cout << "\tA palindrome is not a number!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 12";
    cout << "\n\n\n\n";
    const double num_12 = 45654;
    unsigned int number_12;
    cout << "\tEnter number :";
    cin >> number_12;
    if (num_12 == number_12)
    {
        cout << "\tSuccessfully!";
    }
    else
    {
        cout << "\tAnsuccessfully!";
    }
    cout << "\n\n\n";
    cout << "============================================";
    cout << "\n\n";
    cout << "Tap - 13";
    cout << "\n\n\n\n";
    int people_age;
    cout << "\tEnter people age :";
    cin >> people_age;
    if (people_age <= 2)
    {
        cout << "\tAnswer :" << people_age * 10.5 << "!";
    }
    else
    {
        cout << "\tAnswer :" << people_age * 10.5 + people_age - 2 * 4 << "!";
    }
    cout << "\n\n\n";
    cout << "============================================";
}