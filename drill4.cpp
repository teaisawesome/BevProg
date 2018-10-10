#include "std_lib_facilities.h"


vector<double> orderAlgorithm(vector<double> v)
{
    int idMin;
    for (int i = 0; i < v.size(); i++)
    {
      idMin = i;

      for (int j = i + 1; j < v.size(); j++)
      {
        if (v[j] < v[idMin])
        {
          idMin = j;
        }
      }

      int tmp = v[i];
      v[i] = v[idMin];
      v[idMin] = tmp;
    }

    return v;
}
int main()
{
    double a,b;

    string unit;

    double max, min;

    int db = 0; double sum = 0;

    vector<double> values;


    cout << "Number: ";

    cin >> a >> unit; ++db;

    max = a; min = a;

    if(unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
    {
        //sum

        if(unit == "cm")
        {
            sum = sum + a / 100;

            values.push_back(a / 100);
        }
        else if(unit == "in")
        {
            sum = sum + (a / 2.54) / 100;

            values.push_back((a / 2.54) / 100);
        }
        else if(unit == "ft")
        {
            sum = sum + ((a / 12) / 2.54) / 100;

            values.push_back(((a / 12) / 2.54) / 100);
        }
        else
        {
            sum = sum + a;

            values.push_back(a);
        }

        cout << "The largest so far: " << max;
        
        cout << "\tThe smallest so far: " << min;

        cout << "\tThe number of values: " << db << "\n";

        cout << "Sum of the numbers: " << sum << "\n";

        cout << "Values in vector: ";

        values = orderAlgorithm(values);

        for (int i = 0; i < values.size(); i++)
        {
            cout << values[i] << " ";
        }
        
        cout << "\n";

        while(a != 0)
        {
            cout << "Number: ";

            cin >> a >> unit; ++db;

            if(unit == "cm" || unit == "m" || unit == "in" || unit == "ft")
            {
                if(max < a)
                {
                    max = a;
                }

                if(min > a)
                {
                    min = a;
                }

                if(unit == "cm")
                {
                    sum = sum + a / 100;

                    values.push_back(a / 100);
                }
                else if(unit == "in")
                {
                    sum = sum + (a / 2.54) / 100;

                    values.push_back((a / 2.54) / 100);
                }
                else if(unit == "ft")
                {
                    sum = sum + ((a / 12) / 2.54) / 100;

                    values.push_back(((a / 12) / 2.54) / 100);
                }
                else
                {
                    sum = sum + a;

                    values.push_back(a);
                }

                cout << "The largest so far: " << max;
                
                cout << "\tThe smallest so far: " << min;

                cout << "\tThe number of values: " << db << "\n";

                cout << "Sum of the numbers: " << sum << "\n";

                cout << "Values in vector: ";

                values = orderAlgorithm(values);

                for (int i = 0; i < values.size(); i++)
                {
                    cout << values[i] << " ";
                }

                cout << "\n";

                //6. feladat előtti feladatok megoldása
                /*
                
                cout << "A:";

                cin >> a;

                cout << "A(z) A értéke: " << a;
                
                cout << "\nB:";

                cin >> b;

                cout << "A(z) B értéke: " << b << "\n";

                //2.
                if(a > b)
                {
                    cout << "The larger value is: " << a;
                
                    cout << "\tThe smaller value is: " << b << "\n";

                    if(a - b > 1.0 && a - b < 101)
                    {
                        cout << "The values are almost equal." << "\n";
                    }
                }
                else if(a < b)
                {
                    cout << "The larger value is: " << b;

                    cout << "\tThe smaller value is: " << a << "\n";
                    
                    if(b - a > 1.0 && b - a < 101)
                    {
                        cout << "The values are almost equal." << "\n";
                    }
                }
                //3.
                else
                {
                    cout << "The values are equal!" << "\n";
                }
                */
            }
            else
            {
                cout << "The unit is invalid!" << "\n";

                break;
            }
        }
    }
    else
    {
        cout << "The unit is invalid!" << "\n";
    }
}
