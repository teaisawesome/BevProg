#include "std_lib_facilities.h"

int main()
{
    // 1.

    string first_name;

    // cin >> first_name;

    // cout << "Hello, " << firstname << "!\n";

    cout << "Enter the name of the person you want to write to ";

    cin >> first_name;

    // 2.

    cout << "\nDear " + first_name + ",\n";

    cout << "What are you doing, nowadays? I learn programming and one day I would like to join to Innonic.\n";
    
    // 3.
    string friend_name;

    cin >> friend_name;

    cout << "Have you ever seen " << friend_name << " lately?\n";

    // 4.

    char friend_sex = 0;

    cin >> friend_sex;

    if(friend_sex == 'm')
    {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
    else
    {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }

    // 5.

    int age;

    cin >> age;

    if(age <= 0 || age >= 110)
    {
        simple_error("you are kidding!");
    }

    // 6. 

    if(age < 12)
    {
        cout << "Next year you will be " << age+1 << ".\n";
    }
    else if(age == 17)
    {
        cout << "Next year you will be able to vote.\n";
    }
    else if(age > 70)
    {
        cout << "I hope you are enjoying retirement.\n";
    }

    // 7.

    cout << "\nYours sincerely,\n\n\n" << "Robi\n";

    keep_window_open();

    return 0;
}
