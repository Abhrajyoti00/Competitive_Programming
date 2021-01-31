#include <iostream>
#include <sstream>
using namespace std;

 class Student
{
    int ag,st;
    string fn,ln;

  public:
    void set_age(int age)
       {
           ag=age;
       }

    int get_age()
    {
        return ag;
    }
    void set_first_name(string s)
    {
        fn=s;
    }
    string get_first_name()
    {
        return fn;
    }
    void set_last_name(string s)
    {
        ln=s;
    }
    string get_last_name()
    {
        return ln;
    }
    void set_standard(int t)
       {
           st=t;
       }

    int get_standard()
    {
        return st;
     }

     string to_string()
     {
         stringstream ss;
         ss << ag << "," << fn << "," << ln << "," << st;
            return ss.str();
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

