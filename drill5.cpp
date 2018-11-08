#include "std_lib_facilities.h"

int main()
{
    try
    {
        //1. eredeti:
        //Cout <<"Success!\n";
        // javított:
        //cout << "Success!\n";

        //2. eredeti:
        //cout << "Success!\n;
        //javított:
        //cout << "Success!\n";

        //3. eredeti:
        //cout << "Success" << !\n";
        //javított:
        //cout << "Success" << "!\n";

        //4. eredeti:
        //cout << success << '\n';
        //javított:
        //cout << "success" << '\n';

        //5. eredeti:
        //string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
        //javított1: string vektoros
        //string res = "7"; vector<string> v(10); v[5] = res; cout << "Success!\n";
        //javított2: int res
        //int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";

        //6. eredeti:
        //vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
        //javított:
        //vector<int> v(10); v[5] = 7; if (v[5]==7) cout << "Success!\n";

        //7. eredeti:
        //if (cond) cout << "Success!\n"; else cout << "Fail!\n";
        //javított:
        //int cond;
        //if (cond) cout << "Success!\n"; else cout << "Fail!\n";
        
        //8. eredeti:
        //bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
        //javított:
        //bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";

        //9. eredeti:
        //string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
        //javított:
        //string s = "ape"; bool c = "fool" >  s; if (c) cout << "Success!\n";
        
        //10. eredeti:
        //string s = "ape"; if (s=="fool") cout << "Success!\n";
        //javított:
        //string s = "ape"; if (s=="ape") cout << "Success!\n";

        //11. eredeti:
        //string s = "ape"; if (s=="fool") cout < "Success!\n";
        //javított:
        //string s = "ape"; if (s=="fool") cout << "Success!\n";

        //12. eredeti:
        //string s = "ape"; if (s+"fool") cout < "Success!\n";
        //javított: ???
        //string s = "ape"; if (s + "fool") cout << "Success!\n";
        
        //13. eredeti:
        //vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
        //javított:
        //vector<char> v(5); for (int i=0; i<v.size(); ++i) ; cout << "Success!\n";

        //14. eredeti:
        //vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
        //javított: (nincs hiba)
        //vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";

        //15. eredeti:
        //string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
        //javított:
        //string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];

        //16. eredeti:
        //if (true) then cout << "Success!\n"; else cout << "Fail!\n";
        //javított:
        //if (true) cout << "Success!\n"; else cout << "Fail!\n";

        //17. eredeti:
        //int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
        //javított:
        //int x = 2000; char c = x; if (c == (char)2000) cout << "Success!\n";

        //18. eredeti:
        //string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
        //javított: (perfect :D)
        //string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];

        //19. eredeti:
        //vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
        //javított:
        //vector<int> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";

        //20. eredeti:
        //int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
        //javított:
        //int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";

        //21. eredeti:
        //int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout <<"Success!\n";
        //javított:
        //int x = 2; double d = 5/(x+2); if (d!=2*x+0.5) cout <<"Success!\n";

        //22. eredeti:
        //string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout <<s[i];
        //javított:
        //string s = "Success!\n"; for (int i=0; i<=10; ++i) cout <<s[i];

        //23. eredeti:
        //int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
        //javított:
        //int j = 9;
        //int i=0; while (i<10) ++i; if (j<i) cout << "Success!\n";

        //24. eredeti:
        //int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
        //javított:
        //int x = 4; double d = 5/(x-2); if (d = 2*x + 0.5) cout << "Success!\n";

        //25. eredeti:
        //cin << "Success!\n";
        //javított:
        //cout >> "Success!\n";

        keep_window_open();
        return 0;
    }
    catch (exception& e)
    {
        cerr << "error: " << e.what() << '\n';
        keep_window_open();
        return 1;
    }
    catch (...)
    {
        cerr << "Oops: unknown exception!\n";
        keep_window_open();
        return 2;
    }
}
